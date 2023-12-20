#ifndef BASIC_H
#define BASIC_H

#include <QMainWindow>
#include "AutorizationWindow/autorization.h"
#include "ManagerClass/managermenu.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Basic; }
QT_END_NAMESPACE

class Basic : public QMainWindow
{
    Q_OBJECT


public:
    Basic(QWidget *parent = nullptr);
    ~Basic();
private slots:
    void on_ExitButton_clicked();
    void on_WorkerButton_clicked();

    void on_ManagerButton_clicked();

    void on_BossButton_clicked();

private:
    Ui::Basic *ui;
    Autorization *AutorizationWindow;
    WorkerMenu *WorkerWindow;
    ManagerMenu * ManagerWindow;
    BossMenu * BossWindow;
};
#endif // BASIC_H
