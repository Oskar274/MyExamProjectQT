#ifndef MANAGERMENU_H
#define MANAGERMENU_H

#include <QMainWindow>
#include "ManagerClass/managerclass.h"
#include "DataBase/workerdatabase.h"
namespace Ui {
class ManagerMenu;
}

class ManagerMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManagerMenu(QWidget *parent = nullptr);
    ~ManagerMenu();
signals:
    void returnToBasic();
private slots:
    void on_BackButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::ManagerMenu *ui;
    WorkerDataBase *WorkerDBWindow;
};

#endif // MANAGERMENU_H
