#include "bossclass.h"

BossClass::BossClass ()
{

}
BossClass::BossClass(const QString& name, const QString& login, const QString& password,
                           const QString& phoneNumber, const QString& lastName, const QString& education,const QString& department,const int& salary)
{
    this->name = name;
    this->login = login;
    this->phoneNumber = phoneNumber;
    this->lastName = lastName;
    this->education = education;
    this->department = department;
    this->salaryPerMonth = salary;
    // Используем setAndHashPassword вместо setPassword
    setAndHashPassword(password);
}

QString BossClass::getName() const
{
    return name;
}

QString BossClass::getLogin() const
{
    return login;
}

QString BossClass::getPassword() const
{
    return password;
}

QString BossClass::getPhoneNumber() const
{
    return phoneNumber;
}

QString BossClass::getLastName() const
{
    return lastName;
}

QString BossClass::getEducation() const
{
    return education;
}

QString BossClass::getDepartment() const
{
    return department;
}

QString BossClass::getSalt() const
{
    return salt;
}

int BossClass::getSalaryPerMonth() const
{
    return salaryPerMonth;
}

void BossClass::setSalt(const QString salt)
{
    this->salt = salt;
}

void BossClass::setDepartment(const QString &department)
{
    this->department = department;
}


void BossClass::setEducation(const QString& Education)
{
    this->education = Education;
}

void BossClass::setName(const QString& name)
{
    this->name = name;
}

void BossClass::setLogin(const QString& login)
{
    this->login = login;
}

void BossClass::setPassword(const QString& password)
{
    this->password = password;
}

void BossClass::setPhoneNumber(const QString& phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void BossClass::setLastName(const QString& lastName)
{
    this->lastName = lastName;
}

void BossClass::setSalaryPerMonth(const int &SalaryPM)
{
    this->salaryPerMonth = SalaryPM;
}

//другие функции

QString BossClass::generateSalt() {
    // Генерация  соли
    const int saltLength = 16; // це длина
    QString salt;
    for (int i = 0; i < saltLength; ++i) {
        salt.append(QChar(QRandomGenerator::global()->bounded(256))); //генер соли
    }
    return salt;
}

void BossClass::setAndHashPassword(const QString& password) {
    // генерация соли
    salt = generateSalt();

    // комбо пароля и соли и кодинг
    QByteArray combinedData = (password + salt).toUtf8();
    QByteArray hashedPassword = QCryptographicHash::hash(combinedData, QCryptographicHash::Sha256);

    // Сохранение в виде string
    this->password = QString(hashedPassword.toHex());
}

bool BossClass::checkPassword(const QString& inputPassword) const {
    // комбо пароля и соли
    QByteArray combinedData = (inputPassword + salt).toUtf8();

    // Хеширование и сравнение
    QByteArray hashedInputPassword = QCryptographicHash::hash(combinedData, QCryptographicHash::Sha256);
    QString inputPasswordHash = QString(hashedInputPassword.toHex());
    //qDebug() << inputPasswordHash; //для дебага
    //qDebug() << password;         //для дебага
    return inputPasswordHash == password; //сравнение
}


