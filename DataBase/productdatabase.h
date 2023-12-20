#ifndef PRODUCTDATABASE_H
#define PRODUCTDATABASE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QDir>
#include <QSqlQuery>
#include <QSqlTableModel>


namespace Ui {
class ProductDataBase;
}

class ProductDataBase : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProductDataBase(QWidget *parent = nullptr);
    ~ProductDataBase();
    QSqlDatabase getDatabase() const;
    QSqlTableModel* getModel() const;
signals:
    void WorkerMenu();

private slots:
    void on_ProductAdd_clicked();

    void on_ProductDelete_clicked();

    void on_ProductBackButton_clicked();
    void on_ApplyButton_clicked();

    void on_UpdateButton_clicked();

    void on_ProductTableView_clicked(const QModelIndex &index);

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::ProductDataBase *ui;
    QSqlQuery *query;
    QSqlTableModel *model;
    int numRowsToAdd;
    QSqlDatabase ProductDB;

    int rowNumber; // номер активной строки
};

#endif // PRODUCTDATABASE_H
