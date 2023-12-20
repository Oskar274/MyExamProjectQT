#include "managerclass.h"
ManagerClass::ManagerClass()
{

}
ManagerClass::ManagerClass(const QString& name, const QString& login, const QString& password,
                           const QString& phoneNumber, const QString& lastName,const int& salaryPM, const QString& education)
{
    this->name = name;
    this->login = login;
    this->phoneNumber = phoneNumber;
    this->lastName = lastName;
    this->education = education;
    this->salaryPerMonth = salaryPM;
    // Используем setAndHashPassword вместо setPassword
    setAndHashPassword(password);
}

QString ManagerClass::getName() const
{
    return name;
}

QString ManagerClass::getLogin() const
{
    return login;
}

QString ManagerClass::getPassword() const
{
    return password;
}

QString ManagerClass::getPhoneNumber() const
{
    return phoneNumber;
}

QString ManagerClass::getLastName() const
{
    return lastName;
}

QString ManagerClass::getEducation() const
{
    return education;
}

QString ManagerClass::getSalt() const
{
    return salt;
}
int ManagerClass::getSalaryPerMonth() const
{
    return salaryPerMonth;
}

void ManagerClass::setEducation(const QString& Education)
{
    this->education = Education;
}
void ManagerClass::setSalaryPerMonth(const int& SalaryPM)
{
    this->salaryPerMonth = SalaryPM;
}

void ManagerClass::setSalt(const QString &salt)
{
    this->salt = salt;
}
void ManagerClass::setName(const QString& name)
{
    this->name = name;
}

void ManagerClass::setLogin(const QString& login)
{
    this->login = login;
}

void ManagerClass::setPassword(const QString& password)
{
    this->password = password;
}

void ManagerClass::setPhoneNumber(const QString& phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void ManagerClass::setLastName(const QString& lastName)
{
    this->lastName = lastName;
}

//другие функции

QString ManagerClass::generateSalt() {
    // Генерация  соли
    const int saltLength = 16; // це длина
    QString salt;
    for (int i = 0; i < saltLength; ++i) {
        salt.append(QChar(QRandomGenerator::global()->bounded(256))); //генер соли
    }
    return salt;
}

void ManagerClass::setAndHashPassword(const QString& password) {
    // генерация соли
    salt = generateSalt();

    // комбо пароля и соли и кодинг
    QByteArray combinedData = (password + salt).toUtf8();
    QByteArray hashedPassword = QCryptographicHash::hash(combinedData, QCryptographicHash::Sha256);

    // Сохранение в виде string
    this->password = QString(hashedPassword.toHex());
}

bool ManagerClass::checkPassword(const QString& inputPassword) const {
    // комбо пароля и соли
    QByteArray combinedData = (inputPassword + salt).toUtf8();

    // Хеширование и сравнение
    QByteArray hashedInputPassword = QCryptographicHash::hash(combinedData, QCryptographicHash::Sha256);
    QString inputPasswordHash = QString(hashedInputPassword.toHex());
    //qDebug() << inputPasswordHash; //для дебага
    //qDebug() << password;         //для дебага
    return inputPasswordHash == password; //сравнение
}

