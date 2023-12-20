#ifndef MANAGERCLASS_H
#define MANAGERCLASS_H

#include <QString>
#include <QCryptographicHash>
#include <QRandomGenerator>

class ManagerClass
{
public:
    //конструкторы
    ManagerClass();
    ManagerClass(const QString& name, const QString& login, const QString& password,
                 const QString& phoneNumber, const QString& lastName,const int& salaryPM, const QString& education);

    // Геттеры
    QString getName() const;
    QString getLogin() const;
    QString getPassword() const;
    QString getPhoneNumber() const;
    QString getLastName() const;
    QString getEducation()const;
    QString getSalt()const;
    int getSalaryPerMonth()const;

    // Сеттеры
    void setEducation(const QString &Education);
    void setName(const QString& name);
    void setLogin(const QString& login);
    void setPassword(const QString& password);
    void setPhoneNumber(const QString& phoneNumber);
    void setLastName(const QString& lastName);
    void setSalaryPerMonth(const int& SalaryPM);
    void setSalt(const QString& salt);

    // Другие функции

    // Функция для генерации случайной соли
    static QString generateSalt();

    // Функция для установки соли и хеширования пароля
    void setAndHashPassword(const QString& password);

    // Функция для проверки пароля с использованием соли
    bool checkPassword(const QString& inputPassword) const;

protected:
    QString name;
    QString login;
    QString password;
    QString phoneNumber;
    QString lastName;
    QString salt;
    QString education;
    int salaryPerMonth;
};

#endif // MANAGERCLASS_H
