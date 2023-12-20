#ifndef WORKERDATABASE_H
#define WORKERDATABASE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QDir>
#include <QSqlQuery>
#include <QSqlTableModel>

class DataBaseAddWorker;

namespace Ui {
class WorkerDataBase;
}

class WorkerDataBase : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkerDataBase(QWidget *parent = nullptr);

    ~WorkerDataBase();
    QSqlDatabase getDatabase() const;
    QSqlTableModel* getModel() const;
signals:
    void ManagerMenu();
private slots:
    void on_WorkerAddButton_clicked();

    void on_WorkerBackButton_clicked();

    void on_WorkerDBTableView_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_WorkerDeleteButton_2_clicked();

    void on_pushButton_2_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::WorkerDataBase *ui;
    QSqlQuery *query;
    QSqlTableModel *model;
    int numRowsToAdd;
    QSqlDatabase WorkerDB;
    DataBaseAddWorker* addWorkerWindow;
    int rowNumber; // номер активной строки
};

#endif // WORKERDATABASE_H
