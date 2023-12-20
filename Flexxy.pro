QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AutorizationWindow/autorization.cpp \
    BossClass/bossclass.cpp \
    BossClass/bossmenu.cpp \
    DataBase/DataBaseCommands/databaseaddboss.cpp \
    DataBase/DataBaseCommands/databaseaddmanager.cpp \
    DataBase/DataBaseCommands/databaseaddworker.cpp \
    DataBase/bossdatabase.cpp \
    DataBase/managerdatabase.cpp \
    DataBase/productdatabase.cpp \
    DataBase/workerdatabase.cpp \
    ManagerClass/managerclass.cpp \
    ManagerClass/managermenu.cpp \
    ProductClass/productclass.cpp \
    WorkerClass/workerclass.cpp \
    WorkerClass/workermenu.cpp \
    main.cpp \
    basic.cpp

HEADERS += \
    AutorizationWindow/autorization.h \
    BossClass/bossclass.h \
    BossClass/bossmenu.h \
    DataBase/DataBaseCommands/databaseaddboss.h \
    DataBase/DataBaseCommands/databaseaddmanager.h \
    DataBase/DataBaseCommands/databaseaddworker.h \
    DataBase/bossdatabase.h \
    DataBase/managerdatabase.h \
    DataBase/productdatabase.h \
    DataBase/workerdatabase.h \
    ManagerClass/managerclass.h \
    ManagerClass/managermenu.h \
    ProductClass/productclass.h \
    WorkerClass/workerclass.h \
    WorkerClass/workermenu.h \
    basic.h

FORMS += \
    AutorizationWindow/autorization.ui \
    BossClass/bossmenu.ui \
    DataBase/DataBaseCommands/databaseaddboss.ui \
    DataBase/DataBaseCommands/databaseaddmanager.ui \
    DataBase/DataBaseCommands/databaseaddworker.ui \
    DataBase/bossdatabase.ui \
    DataBase/managerdatabase.ui \
    DataBase/productdatabase.ui \
    DataBase/workerdatabase.ui \
    ManagerClass/managermenu.ui \
    WorkerClass/workermenu.ui \
    basic.ui

win32:RC_FILE = file.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
