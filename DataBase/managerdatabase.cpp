#include "managerdatabase.h"
#include "ui_managerdatabase.h"
#include <QSqlError>
#include "DataBase/DataBaseCommands/databaseaddmanager.h"
ManagerDataBase::ManagerDataBase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagerDataBase),
    numRowsToAdd(1)
{
    ui->setupUi(this);
    ManagerDB = QSqlDatabase::addDatabase("QSQLITE");
    ManagerDB.setDatabaseName("./ManagerDB.db");
    if (ManagerDB.open()) {
        qDebug() << "База данных открыта";
    } else {
        qDebug() << "Ошибка открытия базы данных:";
    }
    query = new QSqlQuery(ManagerDB);
    query->exec("CREATE TABLE ManagerDataBase(FirstName TEXT, LastName TEXT, Telephone TEXT, Salary INT,Education TEXT, Login TEXT, HashedPassword TEXT, Salt TEXT);");
    model = new QSqlTableModel(this,ManagerDB);
    model->setTable("ManagerDataBase");
    model->select();

    ui->ManagerTableView->setModel(model);
}

ManagerDataBase::~ManagerDataBase()
{
    delete ui;
    delete query;
    delete model;
    delete addManagerWindow;
}

QSqlDatabase ManagerDataBase::getDatabase() const
{
    return ManagerDB;
}

QSqlTableModel *ManagerDataBase::getModel() const
{
    return model;
}

void ManagerDataBase::on_ManagerBackButton_clicked()
{
    this->close();
    emit BossMenu();
}


void ManagerDataBase::on_ManagerAddButton_clicked()
{
    this->close();
    addManagerWindow = new DataBaseAddManager(this);
    connect(addManagerWindow, &DataBaseAddManager::managerDBWindow,this,&ManagerDataBase::show);
    addManagerWindow->show();
}

void ManagerDataBase::closeEvent(QCloseEvent *event)
{
    // Сохраняем изменения в базе данных перед закрытием
    model->submitAll();

    // Вызываем базовый метод closeEvent для завершения закрытия приложения
    QMainWindow::closeEvent(event);
}


void ManagerDataBase::on_ApplyButton_clicked()
{
    model->submitAll();
}


void ManagerDataBase::on_ManagerDeleteButton_clicked()
{
    model->removeRow(rowNumber);
}


void ManagerDataBase::on_UpdateButton_clicked()
{
    // Обновляем данные в модели
    model->select();
}


void ManagerDataBase::on_ManagerTableView_clicked(const QModelIndex &index)
{
    rowNumber = index.row();
}

