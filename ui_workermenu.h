/********************************************************************************
** Form generated from reading UI file 'workermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERMENU_H
#define UI_WORKERMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkerMenu
{
public:
    QAction *actionAdd_Product;
    QAction *actionDelete_Product;
    QAction *actionPush_Request_to_Manager;
    QAction *actionPush_Request_to_Boss;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QPushButton *pushButton;
    QWidget *widget_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menuProduct;
    QMenu *menuMy_Acoount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WorkerMenu)
    {
        if (WorkerMenu->objectName().isEmpty())
            WorkerMenu->setObjectName("WorkerMenu");
        WorkerMenu->resize(800, 600);
        actionAdd_Product = new QAction(WorkerMenu);
        actionAdd_Product->setObjectName("actionAdd_Product");
        actionDelete_Product = new QAction(WorkerMenu);
        actionDelete_Product->setObjectName("actionDelete_Product");
        actionPush_Request_to_Manager = new QAction(WorkerMenu);
        actionPush_Request_to_Manager->setObjectName("actionPush_Request_to_Manager");
        actionPush_Request_to_Boss = new QAction(WorkerMenu);
        actionPush_Request_to_Boss->setObjectName("actionPush_Request_to_Boss");
        centralwidget = new QWidget(WorkerMenu);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");

        gridLayout->addWidget(widget, 0, 0, 4, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");

        gridLayout->addWidget(widget_2, 0, 2, 4, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 3, 1, 1, 1);

        WorkerMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WorkerMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuProduct = new QMenu(menubar);
        menuProduct->setObjectName("menuProduct");
        menuMy_Acoount = new QMenu(menubar);
        menuMy_Acoount->setObjectName("menuMy_Acoount");
        WorkerMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(WorkerMenu);
        statusbar->setObjectName("statusbar");
        WorkerMenu->setStatusBar(statusbar);

        menubar->addAction(menuProduct->menuAction());
        menubar->addAction(menuMy_Acoount->menuAction());
        menuProduct->addAction(actionAdd_Product);
        menuProduct->addAction(actionDelete_Product);
        menuProduct->addSeparator();
        menuProduct->addAction(actionPush_Request_to_Manager);
        menuProduct->addAction(actionPush_Request_to_Boss);

        retranslateUi(WorkerMenu);

        QMetaObject::connectSlotsByName(WorkerMenu);
    } // setupUi

    void retranslateUi(QMainWindow *WorkerMenu)
    {
        WorkerMenu->setWindowTitle(QCoreApplication::translate("WorkerMenu", "MainWindow", nullptr));
        actionAdd_Product->setText(QCoreApplication::translate("WorkerMenu", "Add Product", nullptr));
        actionDelete_Product->setText(QCoreApplication::translate("WorkerMenu", "Delete Product", nullptr));
        actionPush_Request_to_Manager->setText(QCoreApplication::translate("WorkerMenu", "Push Request to Manager", nullptr));
        actionPush_Request_to_Boss->setText(QCoreApplication::translate("WorkerMenu", "Push Request to Boss", nullptr));
        pushButton->setText(QCoreApplication::translate("WorkerMenu", "To product", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WorkerMenu", "Request for Manager", nullptr));
        pushButton_4->setText(QCoreApplication::translate("WorkerMenu", "Request for Boss", nullptr));
        pushButton_3->setText(QCoreApplication::translate("WorkerMenu", "Back", nullptr));
        menuProduct->setTitle(QCoreApplication::translate("WorkerMenu", "Product", nullptr));
        menuMy_Acoount->setTitle(QCoreApplication::translate("WorkerMenu", "My Acoount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkerMenu: public Ui_WorkerMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERMENU_H
