#include "basic.h"

#include <QApplication>
#include "DataBase/workerdatabase.h"
#include "DataBase/DataBaseCommands/databaseaddworker.h"
#include "DataBase/managerdatabase.h"
#include "DataBase/DataBaseCommands/databaseaddmanager.h"
#include "DataBase/bossdatabase.h"
#include "DataBase/DataBaseCommands/databaseaddboss.h""
#include "DataBase/productdatabase.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Basic w;
    w.show();
    WorkerDataBase db;
    //db.show();
    DataBaseAddWorker dda;
    //dda.show();
    DataBaseAddManager da;
    //da.show();
    ManagerDataBase mdb;
    //mdb.show();
    BossDataBase gaaga;
    //gaaga.show();
    DataBaseAddBoss ganada;
    //ganada.show();

    ProductDataBase ggg;
    //ggg.show();
    return a.exec();
}
