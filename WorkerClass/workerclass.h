#ifndef WORKERCLASS_H
#define WORKERCLASS_H
#include <QString>
#include <QCryptographicHash>
#include <QRandomGenerator>
class WorkerClass
{
public:
    // Конструкторы
    WorkerClass();
    WorkerClass(const QString& name, const QString& login, const QString& password,
                const QString& phoneNumber, const QString& lastName,const int salary);

    // Геттеры
    QString getName() const;
    QString getLogin() const;
    QString getPassword() const;
    QString getPhoneNumber() const;
    QString getLastName() const;
    QString getSalt()const;
    int getSalaryPerMonth()const;

    // Сеттеры
    void setName(const QString& name);
    void setLogin(const QString& login);
    void setPassword(const QString& password);
    void setPhoneNumber(const QString& phoneNumber);
    void setLastName(const QString& lastName);
    void setSalaryPerMonth(const int SalaryPM);
    void setSalt(const QString salt);
    // Другие функции

    // Функция для генерации случайной соли
    static QString generateSalt();

    // Функция для установки соли и хеширования пароля
    void setAndHashPassword(const QString& password);

    // Функция для проверки пароля с использованием соли
    bool checkPassword(const QString& inputPassword) const;
    bool checkPasswordSimple (const QString& inputPassword) const;

protected:
    QString name;
    QString login;
    QString password;
    QString phoneNumber;
    QString lastName;
    QString salt;
    int salaryPerMonth;
};

#endif // WORKERCLASS_H
