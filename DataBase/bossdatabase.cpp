#include "bossdatabase.h"
#include "ui_bossdatabase.h"
#include "DataBase/DataBaseCommands/databaseaddboss.h"
BossDataBase::BossDataBase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BossDataBase),
    numRowsToAdd(1)
{
    ui->setupUi(this);
    BossDB = QSqlDatabase::addDatabase("QSQLITE", "bossConnection");
    BossDB.setDatabaseName("./BossDB.db");
    if (BossDB.open()) {
        qDebug() << "База данных открыта";
    } else {
        qDebug() << "Ошибка открытия базы данных:";
    }
    query = new QSqlQuery(BossDB);
    query->exec("CREATE TABLE BossDataBase(FirstName TEXT, LastName TEXT, Telephone TEXT, Salary INT,Education TEXT,Department TEXT, Login TEXT, HashedPassword TEXT, Salt TEXT);");
    model = new QSqlTableModel(this,BossDB);
    model->setTable("BossDataBase");
    model->select();

    ui->BossDBTableView->setModel(model);


}



BossDataBase::~BossDataBase()
{
    delete ui;
    delete query;
    delete model;
    delete bossAddWindow;
}

QSqlDatabase BossDataBase::getDatabase() const
{
    return BossDB;
}

QSqlTableModel *BossDataBase::getModel() const
{
    return model;
}

void BossDataBase::on_BossBackButton_clicked()
{
    this->close();
    emit BossMenu();
}


void BossDataBase::on_BossAddButton_clicked()
{
    this->close();
    bossAddWindow = new DataBaseAddBoss(this);
    connect(bossAddWindow, &DataBaseAddBoss::bossDBWindow,this,&BossDataBase::show);
    bossAddWindow->show();
}


void BossDataBase::closeEvent(QCloseEvent *event)
{
    // Сохраняем изменения в базе данных перед закрытием
    model->submitAll();

    // Вызываем базовый метод closeEvent для завершения закрытия приложения
    QMainWindow::closeEvent(event);
}


void BossDataBase::on_ApplyButton_clicked()
{
    model->submitAll();
}


void BossDataBase::on_BossDeleteButton_clicked()
{
    model->removeRow(rowNumber);
}


void BossDataBase::on_UpdateButton_clicked()
{
    // Обновляем данные в модели
    model->select();
}


void BossDataBase::on_BossDBTableView_clicked(const QModelIndex &index)
{
    rowNumber = index.row();
}

