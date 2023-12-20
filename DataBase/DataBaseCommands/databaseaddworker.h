#ifndef DATABASEADDWORKER_H
#define DATABASEADDWORKER_H

#include <QMainWindow>
#include "WorkerClass/workerclass.h"
#include <QVector>
#include "DataBase/workerdatabase.h"
namespace Ui {
class DataBaseAddWorker;
}

class DataBaseAddWorker : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataBaseAddWorker(QWidget *parent = nullptr);
    ~DataBaseAddWorker();
    void setWorkerDataBase(WorkerDataBase* db);
signals:
    void workerDBWindow();
private slots:
    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_2_clicked();

private:
    Ui::DataBaseAddWorker *ui;
    QVector<WorkerClass> workerList;
    WorkerDataBase* workerDataBase;

};

#endif // DATABASEADDWORKER_H
