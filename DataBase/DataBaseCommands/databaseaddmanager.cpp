#include "databaseaddmanager.h"
#include "ui_databaseaddmanager.h"
#include <QIntValidator>
#include<QSqlError>
DataBaseAddManager::DataBaseAddManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataBaseAddManager),
    managerDataBase(new ManagerDataBase)
{
    ui->setupUi(this);
    QLineEdit *salaryLineEdit = ui->MangerSalaryEdit;

    QIntValidator *validator = new QIntValidator(salaryLineEdit);
    salaryLineEdit->setValidator(validator);
}

DataBaseAddManager::~DataBaseAddManager()
{
    delete ui;
    delete managerDataBase;

}

void DataBaseAddManager::on_ManagerAddButton_clicked()
{
    QSqlDatabase ManagerDB = managerDataBase->getDatabase();
    QString name = ui->MangerNameEdit->text();
    QString secondName = ui->MangerSecondNameEdit->text();
    QString phoneNumber = ui->MangerPhoneNumberEdit->text();
    QString salaryString = ui->MangerSalaryEdit->text();
    QString education = ui->MangerEducationEdit->text();
    bool ok;
    int salary = salaryString.toInt(&ok);
    if (ok) {
        // Успешное преобразование строки в int
        qDebug() << "Зарплата в формате int: " << salary;
    } else {
        // Не удалось преобразовать строку в int
        qDebug() << "Ошибка при преобразовании строки в int";
    }
    QString login = ui->MangerLoginEdit->text();
    QString password = ui->MangerPasswordEdit->text();
    ManagerClass manager(name, login, password, phoneNumber, secondName, salary,education);
    managerList.push_back(manager);
    QSqlQuery query(ManagerDB);

    // Пример INSERT-запроса для вставки данных в базу данных
    QString insertQuery = "INSERT INTO ManagerDataBase (FirstName, LastName, Telephone, Salary, Education, Login, HashedPassword, Salt) "
                          "VALUES (:FirstName, :LastName, :Telephone, :Salary, :Education,:Login, :HashedPassword, :Salt)";

    // Подготавливаем запрос
    query.prepare(insertQuery);


    // Устанавливаем значения параметров
    query.bindValue(":FirstName", manager.getName());
    query.bindValue(":LastName", manager.getLastName());
    query.bindValue(":Telephone", manager.getPhoneNumber());
    query.bindValue(":Salary", manager.getSalaryPerMonth());
    query.bindValue(":Education", manager.getEducation());
    query.bindValue(":Login", manager.getLogin());
    query.bindValue(":HashedPassword", manager.getPassword());
    query.bindValue(":Salt", manager.getSalt());

    // Выполняем запрос
    if (query.exec()) {
        qDebug() << "Запись успешно добавлена в базу данных";
        // Обновление модели
        ManagerDB.close();
        this->close();
        emit managerDBWindow();

    } else {
        qDebug() << "Ошибка при выполнении запроса:" << ManagerDB.lastError().text();
        // Дополнительная обработка ошибки, если необходимо
    }

}


void DataBaseAddManager::on_ManagerBackButton_clicked()
{
    this->close();
    emit managerDBWindow();
}


void DataBaseAddManager::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked())
    {
        ui->MangerPasswordEdit->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->MangerPasswordEdit->setEchoMode(QLineEdit::Password);
    }
}

