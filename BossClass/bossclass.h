#ifndef BOSSCLASS_H
#define BOSSCLASS_H

#include <QString>
#include <QCryptographicHash>
#include <QRandomGenerator>

class BossClass
{
public:
    //конструкторы
    BossClass();
    BossClass(const QString& name, const QString& login, const QString& password,
                 const QString& phoneNumber, const QString& lastName, const QString& education,const QString& department,const int& salary);

    // Геттеры
    QString getName() const;
    QString getLogin() const;
    QString getPassword() const;
    QString getPhoneNumber() const;
    QString getLastName() const;
    QString getEducation()const;
    QString getDepartment()const;
    QString getSalt()const;
    int getSalaryPerMonth()const;

    // Сеттеры
    void setSalt(const QString salt);
    void setDepartment(const QString& department);
    void setEducation(const QString &Education);
    void setName(const QString& name);
    void setLogin(const QString& login);
    void setPassword(const QString& password);
    void setPhoneNumber(const QString& phoneNumber);
    void setLastName(const QString& lastName);
    void setSalaryPerMonth(const int& SalaryPM);
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
    QString department;
    int salaryPerMonth;
};

#endif // BOSSCLASS_H
