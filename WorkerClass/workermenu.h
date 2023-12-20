#ifndef WORKERMENU_H
#define WORKERMENU_H

#include <QMainWindow>
#include <QVector>
#include "WorkerClass/workerclass.h"
#include "DataBase/productdatabase.h"
namespace Ui {
class WorkerMenu;
}

class WorkerMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkerMenu(QWidget *parent = nullptr);
    ~WorkerMenu();
signals:
    void Autorization();
    void returnToBasic();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::WorkerMenu *ui;
    ProductDataBase *ProductWindow;
};

#endif // WORKERMENU_H
