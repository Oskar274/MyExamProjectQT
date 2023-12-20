#include "DataBase/workerdatabase.h"
#include "DataBase/DataBaseCommands/databaseaddworker.h"
#include "ui_workerdatabase.h"
WorkerDataBase::WorkerDataBase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WorkerDataBase),
    numRowsToAdd(1)
{
    ui->setupUi(this);





    WorkerDB = QSqlDatabase::addDatabase("QSQLITE","workerConnection");
    WorkerDB.setDatabaseName("./WorkerDB.db");

    if (WorkerDB.open()) {
        qDebug() << "База данных открыта";
    } else {
        qDebug() << "Ошибка открытия базы данных:";
    }

    query = new QSqlQuery(WorkerDB);
    query->exec("CREATE TABLE WorkerDataBase(FirstName TEXT, LastName TEXT, Telephone TEXT, Salary INT, Login TEXT, HashedPassword TEXT, Salt TEXT);");
    model = new QSqlTableModel(this,WorkerDB);
    model->setTable("WorkerDataBase");
    model->select();


    ui->WorkerDBTableView->setModel(model);

}

QSqlDatabase WorkerDataBase::getDatabase() const
{
    return WorkerDB;
}

QSqlTableModel* WorkerDataBase::getModel() const
{
    return model;
}

WorkerDataBase::~WorkerDataBase()
{
    delete model;
    delete query;
    delete ui;
    delete addWorkerWindow;
}


void WorkerDataBase::on_WorkerAddButton_clicked()
{
    this->close();
    addWorkerWindow = new DataBaseAddWorker(this);
    connect(addWorkerWindow,&DataBaseAddWorker::workerDBWindow, this,& WorkerDataBase::show);
    addWorkerWindow->show();
}

void WorkerDataBase::on_WorkerBackButton_clicked()
{
    this->close();
    emit ManagerMenu();
}


void WorkerDataBase::on_WorkerDBTableView_clicked(const QModelIndex &index)
{
    rowNumber = index.row();
}


void WorkerDataBase::on_pushButton_clicked()
{
    model->submitAll();
}


void WorkerDataBase::on_WorkerDeleteButton_2_clicked()
{
    model->removeRow(rowNumber);
}


void WorkerDataBase::on_pushButton_2_clicked()
{
    // Обновляем данные в модели
    model->select();
}

void WorkerDataBase::closeEvent(QCloseEvent *event)
{
    // Сохраняем изменения в базе данных перед закрытием
    model->submitAll();

    // Вызываем базовый метод closeEvent для завершения закрытия приложения
    QMainWindow::closeEvent(event);
}

