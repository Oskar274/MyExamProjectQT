#ifndef DATABASEADDMANAGER_H
#define DATABASEADDMANAGER_H

#include <QMainWindow>
#include <QVector>
#include "ManagerClass/managerclass.h"
#include "DataBase/managerdatabase.h"
namespace Ui {
class DataBaseAddManager;
}

class DataBaseAddManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataBaseAddManager(QWidget *parent = nullptr);
    ~DataBaseAddManager();
signals:
    void managerDBWindow();
private slots:
    void on_ManagerAddButton_clicked();

    void on_ManagerBackButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::DataBaseAddManager *ui;
    QVector<ManagerClass> managerList;
    ManagerDataBase* managerDataBase;
};

#endif // DATABASEADDMANAGER_H
