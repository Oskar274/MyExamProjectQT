#include "workerclass.h"
#include <QDebug>
WorkerClass::WorkerClass()
{
    // Конструктор по умолчанию
}

WorkerClass::WorkerClass(const QString& name, const QString& login, const QString& password,
                         const QString& phoneNumber, const QString& lastName,const int salary)
{
    this->name = name;
    this->login = login;
    // Используйте setAndHashPassword вместо setPassword
    setAndHashPassword(password);
    this->phoneNumber = phoneNumber;
    this->lastName = lastName;
    this->salaryPerMonth = salary;

}

// Геттеры
QString WorkerClass::getName() const
{
    return name;
}

QString WorkerClass::getLogin() const
{
    return login;
}

QString WorkerClass::getPassword() const
{
    return password;
}

QString WorkerClass::getPhoneNumber() const
{
    return phoneNumber;
}

QString WorkerClass::getLastName() const
{
    return lastName;
}

QString WorkerClass::getSalt() const
{
    return salt;
}

int WorkerClass::getSalaryPerMonth() const
{
    return salaryPerMonth;
}
// Сеттеры
void WorkerClass::setName(const QString& name)
{
    this->name = name;
}

void WorkerClass::setLogin(const QString& login)
{
    this->login = login;
}

// используем setAndHashPassword вместо setPassword
void WorkerClass::setPassword(const QString& password)
{
    this->password = password;
}

void WorkerClass::setPhoneNumber(const QString& phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void WorkerClass::setLastName(const QString& lastName)
{
    this->lastName = lastName;
}

void WorkerClass::setSalaryPerMonth(const int SalaryPM)
{
    this->salaryPerMonth = SalaryPM;
}

void WorkerClass::setSalt(const QString salt)
{
    this->salt = salt;
}


//другие функции

QString WorkerClass::generateSalt() {
    // Генерация  соли
    const int saltLength = 16; // це длина
    QString salt;
    for (int i = 0; i < saltLength; ++i) {
        salt.append(QChar(QRandomGenerator::global()->bounded(256))); //генер соли
    }
    return salt;
}

void WorkerClass::setAndHashPassword(const QString& password) {
    // генерация соли
    salt = generateSalt();

    // комбо пароля и соли и кодинг
    QByteArray combinedData = (password + salt).toUtf8();
    QByteArray hashedPassword = QCryptographicHash::hash(combinedData, QCryptographicHash::Sha256);

    // Сохранение в виде string
    this->password = QString(hashedPassword.toHex());
}

bool WorkerClass::checkPassword(const QString& inputPassword) const {
    // комбо пароля и соли
    QByteArray combinedData = (inputPassword + salt).toUtf8();

    // Хеширование и сравнение
    QByteArray hashedInputPassword = QCryptographicHash::hash(combinedData, QCryptographicHash::Sha256);
    QString inputPasswordHash = QString(hashedInputPassword.toHex());
    //qDebug() << inputPasswordHash; //для дебага
    //qDebug() << password;         //для дебага
    return inputPasswordHash == password; //сравнение
}

bool WorkerClass::checkPasswordSimple (const QString& inputPassword) const
{
    return inputPassword == this->password;
}
