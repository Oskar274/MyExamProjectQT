#ifndef DATABASEADDBOSS_H
#define DATABASEADDBOSS_H

#include <QMainWindow>
#include <QVector>
#include "BossClass/bossclass.h"
#include "DataBase/bossdatabase.h"
namespace Ui {
class DataBaseAddBoss;
}

class DataBaseAddBoss : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataBaseAddBoss(QWidget *parent = nullptr);
    ~DataBaseAddBoss();
signals:
    void bossDBWindow();

private slots:
    void on_BossAddButton_clicked();

    void on_BossCancelButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::DataBaseAddBoss *ui;
    QVector<BossClass> bossList;
    BossDataBase* bossDataBase;
};

#endif // DATABASEADDBOSS_H
