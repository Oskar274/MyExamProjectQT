#ifndef BOSSDATABASE_H
#define BOSSDATABASE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QDir>
#include <QSqlQuery>
#include <QSqlTableModel>

class DataBaseAddBoss;

namespace Ui {
class BossDataBase;
}

class BossDataBase : public QMainWindow
{
    Q_OBJECT

public:
    explicit BossDataBase(QWidget *parent = nullptr);
    ~BossDataBase();
    QSqlDatabase getDatabase() const;
    QSqlTableModel* getModel() const;
signals:
    void BossMenu();
private slots:
    void on_BossBackButton_clicked();

    void on_BossAddButton_clicked();
    void on_ApplyButton_clicked();

    void on_BossDeleteButton_clicked();

    void on_UpdateButton_clicked();

    void on_BossDBTableView_clicked(const QModelIndex &index);

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::BossDataBase *ui;
    QSqlDatabase BossDB;
    QSqlQuery *query;
    QSqlTableModel *model;
    int numRowsToAdd;
    DataBaseAddBoss *bossAddWindow;
    int rowNumber; // номер активной строки

};

#endif // BOSSDATABASE_H
