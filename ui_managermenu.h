/********************************************************************************
** Form generated from reading UI file 'managermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERMENU_H
#define UI_MANAGERMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerMenu
{
public:
    QAction *actionAdd_worker;
    QAction *actionDelete_worker;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *BackButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget;
    QWidget *widget_2;
    QMenuBar *menubar;
    QMenu *menuWorkers;
    QMenu *menuMy_Acount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManagerMenu)
    {
        if (ManagerMenu->objectName().isEmpty())
            ManagerMenu->setObjectName("ManagerMenu");
        ManagerMenu->resize(800, 600);
        actionAdd_worker = new QAction(ManagerMenu);
        actionAdd_worker->setObjectName("actionAdd_worker");
        actionDelete_worker = new QAction(ManagerMenu);
        actionDelete_worker->setObjectName("actionDelete_worker");
        centralwidget = new QWidget(ManagerMenu);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName("BackButton");

        verticalLayout->addWidget(BackButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");

        gridLayout->addWidget(widget_2, 0, 2, 1, 1);

        ManagerMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManagerMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuWorkers = new QMenu(menubar);
        menuWorkers->setObjectName("menuWorkers");
        menuMy_Acount = new QMenu(menubar);
        menuMy_Acount->setObjectName("menuMy_Acount");
        ManagerMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(ManagerMenu);
        statusbar->setObjectName("statusbar");
        ManagerMenu->setStatusBar(statusbar);

        menubar->addAction(menuWorkers->menuAction());
        menubar->addAction(menuMy_Acount->menuAction());
        menuWorkers->addAction(actionAdd_worker);
        menuWorkers->addAction(actionDelete_worker);
        menuWorkers->addSeparator();

        retranslateUi(ManagerMenu);

        QMetaObject::connectSlotsByName(ManagerMenu);
    } // setupUi

    void retranslateUi(QMainWindow *ManagerMenu)
    {
        ManagerMenu->setWindowTitle(QCoreApplication::translate("ManagerMenu", "MainWindow", nullptr));
        actionAdd_worker->setText(QCoreApplication::translate("ManagerMenu", "Add worker", nullptr));
        actionDelete_worker->setText(QCoreApplication::translate("ManagerMenu", "Delete worker", nullptr));
        pushButton->setText(QCoreApplication::translate("ManagerMenu", "To workers", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ManagerMenu", "Request to boss", nullptr));
        BackButton->setText(QCoreApplication::translate("ManagerMenu", "Back", nullptr));
        menuWorkers->setTitle(QCoreApplication::translate("ManagerMenu", "Workers", nullptr));
        menuMy_Acount->setTitle(QCoreApplication::translate("ManagerMenu", "My Acount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerMenu: public Ui_ManagerMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERMENU_H
