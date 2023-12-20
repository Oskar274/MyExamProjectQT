#include "bossmenu.h"
#include "ui_bossmenu.h"
#include "DataBase/bossdatabase.h"
BossMenu::BossMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BossMenu)
{
    ui->setupUi(this);
}

BossMenu::~BossMenu()
{
    delete ui;
    delete ManagerDBWindow;
    delete BossDBWindow;
}

void BossMenu::on_pushButton_5_clicked()
{
    this->close();
    emit returnToBasic();
}


void BossMenu::on_ToManagersDB_clicked()
{
    this->close();
    ManagerDBWindow = new ManagerDataBase(this);
    connect(ManagerDBWindow, &ManagerDataBase::BossMenu, this, &BossMenu::show);
    ManagerDBWindow->show();
}


void BossMenu::on_ToBossesDB_clicked()
{
    this->close();
    BossDBWindow = new BossDataBase(this);
    connect(BossDBWindow, &BossDataBase::BossMenu, this, &BossMenu::show);
    BossDBWindow->show();
}

