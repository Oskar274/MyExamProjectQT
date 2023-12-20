#include "productdatabase.h"
#include "ui_productdatabase.h"
#include <QInputDialog>
#include <QSqlError>
ProductDataBase::ProductDataBase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProductDataBase),
    numRowsToAdd(1)
{
    ui->setupUi(this);

    ProductDB = QSqlDatabase::addDatabase("QSQLITE","productConnection");
    ProductDB.setDatabaseName("./ProductDB.db");

    if (ProductDB.open()) {
        qDebug() << "База данных открыта";
    } else {
        qDebug() << "Ошибка открытия базы данных:";
    }

    query = new QSqlQuery(ProductDB);
    query->exec("CREATE TABLE ProductDataBase (name TEXT, pricePerOne INT, count INT, totalPrice INT);");
    query->exec("CREATE TRIGGER updateTotalPrice AFTER UPDATE OF pricePerOne, count ON ProductDataBase "
                "BEGIN "
                "   UPDATE ProductDataBase SET totalPrice = NEW.pricePerOne * NEW.count WHERE rowid = NEW.rowid; "
                "END;");
    model = new QSqlTableModel(this,ProductDB);
    model->setTable("ProductDataBase");
    model->select();

    ui->ProductTableView->setModel(model);
}

ProductDataBase::~ProductDataBase()
{
    delete model;
    delete query;
    delete ui;
}

void ProductDataBase::on_ProductAdd_clicked()
{
    int rowCount = model->rowCount(); // Получаем текущее количество строк
    model->insertRow(rowCount);      // Вставляем новую строку в конец таблицы
    model->setData(model->index(rowCount, 0), "New Product"); // Устанавливаем данные для новой строки (первая колонка, например, название продукта)
    // Устанавливайте данные для других колонок, если необходимо
}


void ProductDataBase::on_ProductDelete_clicked()
{
    model->removeRow(rowNumber);
}


void ProductDataBase::on_ProductBackButton_clicked()
{
    this->close();
    model->submitAll();
    emit WorkerMenu();
}

void ProductDataBase::closeEvent(QCloseEvent *event)
{
    // Сохраняем изменения в базе данных перед закрытием
    model->submitAll();

    // Вызываем базовый метод closeEvent для завершения закрытия приложения
    QMainWindow::closeEvent(event);
}

void ProductDataBase::on_ApplyButton_clicked()
{
    model->submitAll();
}


void ProductDataBase::on_UpdateButton_clicked()
{
    // Обновляем данные в модели
    model->select();
}


void ProductDataBase::on_ProductTableView_clicked(const QModelIndex &index)
{
    rowNumber = index.row();
}

