#include "workermenu.h"
#include "ui_workermenu.h"

WorkerMenu::WorkerMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WorkerMenu)
{
    ui->setupUi(this);
}

WorkerMenu::~WorkerMenu()
{
    delete ui;
    delete ProductWindow;
}

void WorkerMenu::on_pushButton_3_clicked()
{
    emit returnToBasic();
    this->close();
}


void WorkerMenu::on_pushButton_clicked()
{
    this->close();
    ProductWindow = new ProductDataBase(this);
    connect(ProductWindow,&ProductDataBase::WorkerMenu, this,& WorkerMenu::show);
    ProductWindow->show();
}

