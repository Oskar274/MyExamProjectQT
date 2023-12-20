/********************************************************************************
** Form generated from reading UI file 'basic.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASIC_H
#define UI_BASIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Basic
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *WorkerButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *ManagerButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *BossButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ExitButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Basic)
    {
        if (Basic->objectName().isEmpty())
            Basic->setObjectName("Basic");
        Basic->resize(800, 600);
        centralwidget = new QWidget(Basic);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        WorkerButton = new QPushButton(centralwidget);
        WorkerButton->setObjectName("WorkerButton");

        verticalLayout->addWidget(WorkerButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        ManagerButton = new QPushButton(centralwidget);
        ManagerButton->setObjectName("ManagerButton");

        verticalLayout->addWidget(ManagerButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        BossButton = new QPushButton(centralwidget);
        BossButton->setObjectName("BossButton");

        verticalLayout->addWidget(BossButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName("ExitButton");

        verticalLayout->addWidget(ExitButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");

        gridLayout->addWidget(widget_2, 0, 2, 1, 1);

        Basic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Basic);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Basic->setMenuBar(menubar);
        statusbar = new QStatusBar(Basic);
        statusbar->setObjectName("statusbar");
        Basic->setStatusBar(statusbar);

        retranslateUi(Basic);

        QMetaObject::connectSlotsByName(Basic);
    } // setupUi

    void retranslateUi(QMainWindow *Basic)
    {
        Basic->setWindowTitle(QCoreApplication::translate("Basic", "Basic", nullptr));
        WorkerButton->setText(QCoreApplication::translate("Basic", "Worker", nullptr));
        ManagerButton->setText(QCoreApplication::translate("Basic", "Manager", nullptr));
        BossButton->setText(QCoreApplication::translate("Basic", "Boss", nullptr));
        ExitButton->setText(QCoreApplication::translate("Basic", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Basic: public Ui_Basic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASIC_H
