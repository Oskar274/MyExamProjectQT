#include "databaseaddboss.h"
#include "ui_databaseaddboss.h"
#include <QValidator>
#include <QSqlError>
DataBaseAddBoss::DataBaseAddBoss(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataBaseAddBoss),
    bossDataBase(new BossDataBase)
{
    ui->setupUi(this);
    QLineEdit *salaryLineEdit = ui->BossSalaryEdit;

    QIntValidator *validator = new QIntValidator(salaryLineEdit);
    salaryLineEdit->setValidator(validator);
}

DataBaseAddBoss::~DataBaseAddBoss()
{
    delete ui;
    delete bossDataBase;
}

void DataBaseAddBoss::on_BossAddButton_clicked()
{
    QSqlDatabase BossDB = bossDataBase->getDatabase();
    QString name = ui->BossNameEdit->text();
    QString secondName = ui->BossSecondNameEdit->text();
    QString phoneNumber = ui->BossPhoneNumberEdit->text();
    QString salaryString = ui->BossSalaryEdit->text();
    QString education = ui->BossEducationEdit->text();
    QString departament = ui->BossDepartamentEdit->text();
    bool ok;
    int salary = salaryString.toInt(&ok);
    if (ok) {
        // Успешное преобразование строки в int
        qDebug() << "Зарплата в формате int: " << salary;
    } else {
        // Не удалось преобразовать строку в int
        qDebug() << "Ошибка при преобразовании строки в int";
    }
    QString login = ui->BossLoginEdit->text();
    QString password = ui->BossPasswordEdit->text();

    BossClass boss(name, login, password, phoneNumber, secondName,education,departament, salary);
    bossList.push_back(boss);
    QSqlQuery query(BossDB);

    // Пример INSERT-запроса для вставки данных в базу данных
    QString insertQuery = "INSERT INTO BossDataBase (FirstName, LastName, Telephone, Salary, Education,Department, Login, HashedPassword, Salt) "
                          "VALUES (:FirstName, :LastName, :Telephone, :Salary, :Education,:Department,:Login, :HashedPassword, :Salt)";

    // Подготавливаем запрос
    query.prepare(insertQuery);


    // Устанавливаем значения параметров
    query.bindValue(":FirstName", boss.getName());
    query.bindValue(":LastName", boss.getLastName());
    query.bindValue(":Telephone", boss.getPhoneNumber());
    query.bindValue(":Salary", boss.getSalaryPerMonth());
    query.bindValue(":Education", boss.getEducation());
    query.bindValue(":Department", boss.getDepartment());
    query.bindValue(":Login", boss.getLogin());
    query.bindValue(":HashedPassword", boss.getPassword());
    query.bindValue(":Salt", boss.getSalt());

    // Выполняем запрос
    if (query.exec()) {
        qDebug() << "Запись успешно добавлена в базу данных";
        // Обновление модели
        BossDB.close();
        this->close();
        emit bossDBWindow();
    } else {
        qDebug() << "Ошибка при выполнении запроса:" << BossDB.lastError().text();
        // Дополнительная обработка ошибки, если необходимо
    }
}


void DataBaseAddBoss::on_BossCancelButton_clicked()
{
    this->close();
    emit bossDBWindow();
}


void DataBaseAddBoss::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked())
    {
        ui->BossPasswordEdit->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->BossPasswordEdit->setEchoMode(QLineEdit::Password);
    }
}

