#include "managermenu.h"
#include "ui_managermenu.h"

ManagerMenu::ManagerMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagerMenu)
{
    ui->setupUi(this);
}

ManagerMenu::~ManagerMenu()
{
    delete ui;
    delete WorkerDBWindow;
}

void ManagerMenu::on_BackButton_clicked()
{
    this->close();
    emit returnToBasic();
}


void ManagerMenu::on_pushButton_clicked()
{
    this->close();
    WorkerDBWindow = new WorkerDataBase(this);
    connect(WorkerDBWindow, &WorkerDataBase::ManagerMenu, this, &ManagerMenu::show);
    WorkerDBWindow->show();
}

