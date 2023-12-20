#ifndef MANAGERDATABASE_H
#define MANAGERDATABASE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QDir>
#include <QSqlQuery>
#include <QSqlTableModel>

class DataBaseAddManager;

namespace Ui {
class ManagerDataBase;
}

class ManagerDataBase : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManagerDataBase(QWidget *parent = nullptr);
    ~ManagerDataBase();

    QSqlDatabase getDatabase() const;
    QSqlTableModel* getModel() const;
signals:
    void BossMenu();
private slots:
    void on_ManagerBackButton_clicked();

    void on_ManagerAddButton_clicked();
    void on_ApplyButton_clicked();

    void on_ManagerDeleteButton_clicked();

    void on_UpdateButton_clicked();

    void on_ManagerTableView_clicked(const QModelIndex &index);

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::ManagerDataBase *ui;
    QSqlDatabase ManagerDB;
    QSqlQuery *query;
    QSqlTableModel *model;
    int numRowsToAdd;
    DataBaseAddManager *addManagerWindow;
    int rowNumber; // номер активной строки
};

#endif // MANAGERDATABASE_H
