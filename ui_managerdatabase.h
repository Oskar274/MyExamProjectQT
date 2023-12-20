/********************************************************************************
** Form generated from reading UI file 'managerdatabase.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERDATABASE_H
#define UI_MANAGERDATABASE_H

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

class Ui_ManagerDataBase
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *ManagerAddButton;
    QTableView *ManagerTableView;
    QPushButton *ApplyButton;
    QPushButton *ManagerBackButton;
    QPushButton *ManagerDeleteButton;
    QPushButton *UpdateButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManagerDataBase)
    {
        if (ManagerDataBase->objectName().isEmpty())
            ManagerDataBase->setObjectName("ManagerDataBase");
        ManagerDataBase->resize(800, 600);
        centralwidget = new QWidget(ManagerDataBase);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        ManagerAddButton = new QPushButton(centralwidget);
        ManagerAddButton->setObjectName("ManagerAddButton");

        gridLayout->addWidget(ManagerAddButton, 1, 0, 1, 1);

        ManagerTableView = new QTableView(centralwidget);
        ManagerTableView->setObjectName("ManagerTableView");

        gridLayout->addWidget(ManagerTableView, 0, 0, 1, 5);

        ApplyButton = new QPushButton(centralwidget);
        ApplyButton->setObjectName("ApplyButton");

        gridLayout->addWidget(ApplyButton, 1, 1, 1, 1);

        ManagerBackButton = new QPushButton(centralwidget);
        ManagerBackButton->setObjectName("ManagerBackButton");

        gridLayout->addWidget(ManagerBackButton, 1, 4, 1, 1);

        ManagerDeleteButton = new QPushButton(centralwidget);
        ManagerDeleteButton->setObjectName("ManagerDeleteButton");

        gridLayout->addWidget(ManagerDeleteButton, 1, 2, 1, 1);

        UpdateButton = new QPushButton(centralwidget);
        UpdateButton->setObjectName("UpdateButton");

        gridLayout->addWidget(UpdateButton, 1, 3, 1, 1);

        ManagerDataBase->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManagerDataBase);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ManagerDataBase->setMenuBar(menubar);
        statusbar = new QStatusBar(ManagerDataBase);
        statusbar->setObjectName("statusbar");
        ManagerDataBase->setStatusBar(statusbar);

        retranslateUi(ManagerDataBase);

        QMetaObject::connectSlotsByName(ManagerDataBase);
    } // setupUi

    void retranslateUi(QMainWindow *ManagerDataBase)
    {
        ManagerDataBase->setWindowTitle(QCoreApplication::translate("ManagerDataBase", "MainWindow", nullptr));
        ManagerAddButton->setText(QCoreApplication::translate("ManagerDataBase", "Add", nullptr));
        ApplyButton->setText(QCoreApplication::translate("ManagerDataBase", "Apply", nullptr));
        ManagerBackButton->setText(QCoreApplication::translate("ManagerDataBase", "Back", nullptr));
        ManagerDeleteButton->setText(QCoreApplication::translate("ManagerDataBase", "Delete", nullptr));
        UpdateButton->setText(QCoreApplication::translate("ManagerDataBase", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerDataBase: public Ui_ManagerDataBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERDATABASE_H
