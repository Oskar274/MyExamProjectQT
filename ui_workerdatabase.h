/********************************************************************************
** Form generated from reading UI file 'workerdatabase.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERDATABASE_H
#define UI_WORKERDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkerDataBase
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *WorkerAddButton;
    QPushButton *WorkerBackButton;
    QTableView *WorkerDBTableView;
    QPushButton *pushButton;
    QPushButton *WorkerDeleteButton_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WorkerDataBase)
    {
        if (WorkerDataBase->objectName().isEmpty())
            WorkerDataBase->setObjectName("WorkerDataBase");
        WorkerDataBase->resize(800, 600);
        centralwidget = new QWidget(WorkerDataBase);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        WorkerAddButton = new QPushButton(centralwidget);
        WorkerAddButton->setObjectName("WorkerAddButton");

        gridLayout->addWidget(WorkerAddButton, 1, 0, 1, 1);

        WorkerBackButton = new QPushButton(centralwidget);
        WorkerBackButton->setObjectName("WorkerBackButton");

        gridLayout->addWidget(WorkerBackButton, 1, 4, 1, 1);

        WorkerDBTableView = new QTableView(centralwidget);
        WorkerDBTableView->setObjectName("WorkerDBTableView");

        gridLayout->addWidget(WorkerDBTableView, 0, 0, 1, 5);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        WorkerDeleteButton_2 = new QPushButton(centralwidget);
        WorkerDeleteButton_2->setObjectName("WorkerDeleteButton_2");

        gridLayout->addWidget(WorkerDeleteButton_2, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 1, 3, 1, 1);

        WorkerDataBase->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WorkerDataBase);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        WorkerDataBase->setMenuBar(menubar);
        statusbar = new QStatusBar(WorkerDataBase);
        statusbar->setObjectName("statusbar");
        WorkerDataBase->setStatusBar(statusbar);

        retranslateUi(WorkerDataBase);

        QMetaObject::connectSlotsByName(WorkerDataBase);
    } // setupUi

    void retranslateUi(QMainWindow *WorkerDataBase)
    {
        WorkerDataBase->setWindowTitle(QCoreApplication::translate("WorkerDataBase", "MainWindow", nullptr));
        WorkerAddButton->setText(QCoreApplication::translate("WorkerDataBase", "Add", nullptr));
        WorkerBackButton->setText(QCoreApplication::translate("WorkerDataBase", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("WorkerDataBase", "Apply", nullptr));
        WorkerDeleteButton_2->setText(QCoreApplication::translate("WorkerDataBase", "Delete", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WorkerDataBase", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkerDataBase: public Ui_WorkerDataBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERDATABASE_H
