#include "autorization.h"
#include "ui_autorization.h"
#include "basic.h"
#include <QSqlError>
Autorization::Autorization(int buttonNumber, WorkerMenu *workerMenu,ManagerMenu * managerMenu,BossMenu *bossMenu, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::Autorization),
    buttonNumber_(buttonNumber),
    workerDataBase(new WorkerDataBase),
    bossDataBase(new BossDataBase),
    managerDataBase(new ManagerDataBase),
    workerMenuWindow(workerMenu),
    managerMenuWindow(managerMenu),
    bossMenuWindow(bossMenu)
{
    ui->setupUi(this);
}

int Autorization::getButtonNumber() const
{
    return buttonNumber_;
}

Autorization::~Autorization()
{
    delete ui;
    delete workerDataBase;
    delete workerMenuWindow;
    delete managerDataBase;
    delete managerMenuWindow;
}

void Autorization::on_BackButton_clicked()
{
    this->close();
    emit MainWindow();
}

void Autorization::on_NextButton_clicked()
{
    QString login = ui->LoginLineEdit->text();
    QString password = ui->PasswordLineEdit->text();
    ui->ErrorLabel->setStyleSheet("color: red;");
    QSqlDatabase workerDB = workerDataBase->getDatabase(); // Получение базы данных
    QSqlQuery query1(workerDB); // Создание объекта запроса
    QSqlDatabase managerDB = managerDataBase->getDatabase();// Получение базы данных
    QSqlQuery query2(managerDB); // Создание объекта запроса
    QSqlDatabase BossDB = bossDataBase->getDatabase();// Получение базы данных
    QSqlQuery query3(BossDB); // Создание объекта запроса

    switch (buttonNumber_) {
    case 1:
        query1.prepare("SELECT * FROM WorkerDataBase WHERE Login = :Login");
        query1.bindValue(":Login", login);

        if (query1.exec() && query1.next())
        {
            QString storedPassword = query1.value("HashedPassword").toString();
            QString storedSalt = query1.value("Salt").toString();

            WorkerClass worker;
            worker.setSalt(storedSalt);

            // Проверка пароля
            worker.setPassword(storedPassword);
            worker.setSalt(storedSalt);

            bool passwordMatch = worker.checkPassword(password);

            if (passwordMatch) {
                // Пароль совпал
                qDebug() << "Пароль совпал! Авторизация успешна.";
                this->close();
                workerMenuWindow->show();

            }
             else {
                // Пароль не совпал
                qDebug() << "Неправильный пароль!";
                ui->ErrorLabel->setText("wrong password");
            }
        } else {
            // Пользователь не найден
            qDebug() << "Пользователь не найден.";
            ui->ErrorLabel->setText("Uncorrect user");
        }
        break;
    case 2:
        query2.prepare("SELECT * FROM ManagerDataBase WHERE Login = :Login");
        query2.bindValue(":Login", login);

        if (query2.exec() && query2.next())
        {
            QString storedPassword = query2.value("HashedPassword").toString();
            QString storedSalt = query2.value("Salt").toString();

            ManagerClass manager;
            manager.setSalt(storedSalt);

            // Проверка пароля
            manager.setPassword(storedPassword);
            manager.setSalt(storedSalt);

            bool passwordMatch = manager.checkPassword(password);

            if (passwordMatch) {
                // Пароль совпал
                qDebug() << "Пароль совпал! Авторизация успешна.";
                this->close();
                managerMenuWindow->show();

            }
            else {
                // Пароль не совпал
                qDebug() << "Неправильный пароль!";
                ui->ErrorLabel->setText("wrong password");
            }
        } else {
            // Пользователь не найден
            qDebug() << "Пользователь не найден.";
            ui->ErrorLabel->setText("Uncorrect user");
        }
        break;
    case 3:
        query3.prepare("SELECT * FROM BossDataBase WHERE Login = :Login");
        query3.bindValue(":Login", login);

        if (query3.exec() && query3.next())
        {
            QString storedPassword = query3.value("HashedPassword").toString();
            QString storedSalt = query3.value("Salt").toString();

            BossClass boss;
            boss.setSalt(storedSalt);

            // Проверка пароля
            boss.setPassword(storedPassword);
            boss.setSalt(storedSalt);

            bool passwordMatch = boss.checkPassword(password);

            if (passwordMatch) {
                // Пароль совпал
                qDebug() << "Пароль совпал! Авторизация успешна.";
                this->close();
                bossMenuWindow->show();

            }
            else {
                // Пароль не совпал
                qDebug() << "Неправильный пароль!";
                ui->ErrorLabel->setText("wrong password");
            }
        } else {
            // Пользователь не найден
            qDebug() << "Пользователь не найден.";
            ui->ErrorLabel->setText("Uncorrect user");
        }
        break;
    default:
        break;
    }

}


void Autorization::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked())
    {
        ui->PasswordLineEdit->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->PasswordLineEdit->setEchoMode(QLineEdit::Password);
    }
}

