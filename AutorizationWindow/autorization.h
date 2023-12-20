#ifndef AUTORIZATION_H
#define AUTORIZATION_H

#include <QMainWindow>
#include "DataBase/workerdatabase.h"
#include "DataBase/managerdatabase.h"
#include "DataBase/bossdatabase.h"
#include "WorkerClass/workermenu.h"
#include "ManagerClass/managermenu.h"
#include "BossClass/bossmenu.h"
namespace Ui {
class Autorization;
}

class Autorization : public QMainWindow
{
    Q_OBJECT
signals:
    void MainWindow();
public:
    explicit Autorization(int buttonNumber,WorkerMenu *workerMenu,ManagerMenu * managerMenu,BossMenu *bossMenu, QWidget *parent = nullptr);
    ~Autorization();
    // Новый метод для получения значения buttonNumber_
    int getButtonNumber() const;

private slots:
    void on_BackButton_clicked();
    void on_NextButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Autorization *ui;
    int buttonNumber_;
    WorkerDataBase* workerDataBase;
    BossDataBase * bossDataBase;
    ManagerDataBase * managerDataBase;
    WorkerMenu * workerMenuWindow;
    ManagerMenu * managerMenuWindow;
    BossMenu * bossMenuWindow;
};

#endif // AUTORIZATION_H
