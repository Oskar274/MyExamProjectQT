#include "basic.h"
#include "ui_basic.h"

Basic::Basic(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Basic)
{
    ui->setupUi(this);
    WorkerWindow = new WorkerMenu(this);
    connect(WorkerWindow, &WorkerMenu::returnToBasic, this, &Basic::show);
    ManagerWindow = new ManagerMenu(this);
    connect(ManagerWindow, &ManagerMenu::returnToBasic, this, &Basic::show);
    BossWindow = new BossMenu(this);
    connect(BossWindow, &BossMenu::returnToBasic, this, &Basic::show);
}

Basic::~Basic()
{
    delete ui;
    delete AutorizationWindow;
}

void Basic::on_ExitButton_clicked()
{
    close();
}


void Basic::on_WorkerButton_clicked()
{
    AutorizationWindow = new Autorization(1,WorkerWindow,ManagerWindow,BossWindow,this);  // Передаем номер кнопки (1)
    connect(AutorizationWindow, &Autorization::MainWindow, this, &Basic::show);
    this->close();
    AutorizationWindow->show();
}


void Basic::on_ManagerButton_clicked()
{
    AutorizationWindow = new Autorization(2,WorkerWindow,ManagerWindow,BossWindow,this); // Передаем номер кнопки (2)
    connect(AutorizationWindow, &Autorization::MainWindow, this, &Basic::show);
    this->close();
    AutorizationWindow->show();
}


void Basic::on_BossButton_clicked()
{
    AutorizationWindow = new Autorization(3,WorkerWindow,ManagerWindow,BossWindow,this); // Передаем номер кнопки (3)
    connect(AutorizationWindow, &Autorization::MainWindow, this, &Basic::show);
    this->close();
    AutorizationWindow->show();
}

