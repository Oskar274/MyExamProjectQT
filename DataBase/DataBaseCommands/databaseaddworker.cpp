#include "databaseaddworker.h"
#include "ui_databaseaddworker.h"
#include <QIntValidator>
#include <QSqlError>
#include "DataBase/workerdatabase.h"
DataBaseAddWorker::DataBaseAddWorker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataBaseAddWorker),
    workerDataBase(new WorkerDataBase)
{
    ui->setupUi(this);
    QLineEdit *salaryLineEdit = ui->SalaryEdit;

    QIntValidator *validator = new QIntValidator(salaryLineEdit);
    salaryLineEdit->setValidator(validator);
}

DataBaseAddWorker::~DataBaseAddWorker()
{
    delete workerDataBase;
    delete ui;
}

void DataBaseAddWorker::setWorkerDataBase(WorkerDataBase *db)
{
    workerDataBase = db;
}

void DataBaseAddWorker::on_pushButton_clicked()
{

    QSqlDatabase WorkerDB = workerDataBase->getDatabase();

    QString name = ui->NameEdit->text();
    QString secondName = ui->SecondNameEdit->text();
    QString phoneNumber = ui->PhoneNumberEdit->text();
    QString salaryString = ui->SalaryEdit->text();
    bool ok;
    int salary = salaryString.toInt(&ok);
    if (ok) {
        // Успешное преобразование строки в int
        qDebug() << "Зарплата в формате int: " << salary;
    } else {
        // Не удалось преобразовать строку в int
        qDebug() << "Ошибка при преобразовании строки в int";
    }
    QString login = ui->WorkerLoginEdit->text();
    QString password = ui->WorkerPasswordEdit->text();
    WorkerClass worker(name, login, password, phoneNumber, secondName, salary);
    workerList.push_back(worker);

    QSqlQuery query(WorkerDB);

    // Пример INSERT-запроса для вставки данных в базу данных
    QString insertQuery = "INSERT INTO WorkerDataBase (FirstName, LastName, Telephone, Login, Salary, HashedPassword, Salt) "
                          "VALUES (:FirstName, :LastName, :Telephone, :Login, :Salary, :HashedPassword, :Salt)";

    // Подготавливаем запрос
    query.prepare(insertQuery);

    // Устанавливаем значения параметров
    query.bindValue(":FirstName", worker.getName());
    query.bindValue(":LastName", worker.getLastName());
    query.bindValue(":Telephone", worker.getPhoneNumber());
    query.bindValue(":Login", worker.getLogin());
    query.bindValue(":Salary", worker.getSalaryPerMonth());
    query.bindValue(":HashedPassword", worker.getPassword());
    query.bindValue(":Salt", worker.getSalt());

    // Выполняем запрос
    if (query.exec()) {
        qDebug() << "Запись успешно добавлена в базу данных";
        // Обновление модели
        WorkerDB.close();
        this->close();
        emit workerDBWindow();
    } else {
        qDebug() << "Ошибка при выполнении запроса:" << WorkerDB.lastError().text();
        // Дополнительная обработка ошибки, если необходимо
    }
}


void DataBaseAddWorker::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked())
    {
        ui->WorkerPasswordEdit->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->WorkerPasswordEdit->setEchoMode(QLineEdit::Password);
    }
}


void DataBaseAddWorker::on_pushButton_2_clicked()
{
    this->close();
    emit workerDBWindow();
}

