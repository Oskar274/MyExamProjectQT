/********************************************************************************
** Form generated from reading UI file 'bossmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOSSMENU_H
#define UI_BOSSMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BossMenu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *ToManagersDB;
    QPushButton *ToBossesDB;
    QWidget *widget;
    QPushButton *CheckMassFromWorkers;
    QWidget *widget_2;
    QPushButton *CheckMassFromManagers;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BossMenu)
    {
        if (BossMenu->objectName().isEmpty())
            BossMenu->setObjectName("BossMenu");
        BossMenu->resize(800, 600);
        centralwidget = new QWidget(BossMenu);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        ToManagersDB = new QPushButton(centralwidget);
        ToManagersDB->setObjectName("ToManagersDB");

        gridLayout->addWidget(ToManagersDB, 0, 1, 1, 1);

        ToBossesDB = new QPushButton(centralwidget);
        ToBossesDB->setObjectName("ToBossesDB");

        gridLayout->addWidget(ToBossesDB, 1, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");

        gridLayout->addWidget(widget, 2, 0, 1, 1);

        CheckMassFromWorkers = new QPushButton(centralwidget);
        CheckMassFromWorkers->setObjectName("CheckMassFromWorkers");

        gridLayout->addWidget(CheckMassFromWorkers, 2, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");

        gridLayout->addWidget(widget_2, 2, 2, 2, 1);

        CheckMassFromManagers = new QPushButton(centralwidget);
        CheckMassFromManagers->setObjectName("CheckMassFromManagers");

        gridLayout->addWidget(CheckMassFromManagers, 3, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 4, 1, 1, 1);

        BossMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BossMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        BossMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(BossMenu);
        statusbar->setObjectName("statusbar");
        BossMenu->setStatusBar(statusbar);

        retranslateUi(BossMenu);

        QMetaObject::connectSlotsByName(BossMenu);
    } // setupUi

    void retranslateUi(QMainWindow *BossMenu)
    {
        BossMenu->setWindowTitle(QCoreApplication::translate("BossMenu", "MainWindow", nullptr));
        ToManagersDB->setText(QCoreApplication::translate("BossMenu", "To Managers", nullptr));
        ToBossesDB->setText(QCoreApplication::translate("BossMenu", "To Bosses", nullptr));
        CheckMassFromWorkers->setText(QCoreApplication::translate("BossMenu", "Check messages from workers", nullptr));
        CheckMassFromManagers->setText(QCoreApplication::translate("BossMenu", "Check messages from managers", nullptr));
        pushButton_5->setText(QCoreApplication::translate("BossMenu", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BossMenu: public Ui_BossMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOSSMENU_H
