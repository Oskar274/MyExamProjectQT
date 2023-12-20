#ifndef BOSSMENU_H
#define BOSSMENU_H

#include <QMainWindow>
#include "BossClass/bossclass.h"
#include "DataBase/bossdatabase.h"
#include "DataBase/managerdatabase.h"
namespace Ui {
class BossMenu;
}

class BossMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit BossMenu(QWidget *parent = nullptr);
    ~BossMenu();
signals:
    void returnToBasic();

private slots:
    void on_pushButton_5_clicked();

    void on_ToManagersDB_clicked();

    void on_ToBossesDB_clicked();

private:
    Ui::BossMenu *ui;
    BossDataBase *BossDBWindow;
    ManagerDataBase *ManagerDBWindow;
};

#endif // BOSSMENU_H
