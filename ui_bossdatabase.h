/********************************************************************************
** Form generated from reading UI file 'bossdatabase.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOSSDATABASE_H
#define UI_BOSSDATABASE_H

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

class Ui_BossDataBase
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *BossBackButton;
    QPushButton *BossDeleteButton;
    QTableView *BossDBTableView;
    QPushButton *BossAddButton;
    QPushButton *ApplyButton;
    QPushButton *UpdateButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BossDataBase)
    {
        if (BossDataBase->objectName().isEmpty())
            BossDataBase->setObjectName("BossDataBase");
        BossDataBase->resize(873, 700);
        centralwidget = new QWidget(BossDataBase);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        BossBackButton = new QPushButton(centralwidget);
        BossBackButton->setObjectName("BossBackButton");

        gridLayout->addWidget(BossBackButton, 1, 4, 1, 1);

        BossDeleteButton = new QPushButton(centralwidget);
        BossDeleteButton->setObjectName("BossDeleteButton");

        gridLayout->addWidget(BossDeleteButton, 1, 2, 1, 1);

        BossDBTableView = new QTableView(centralwidget);
        BossDBTableView->setObjectName("BossDBTableView");

        gridLayout->addWidget(BossDBTableView, 0, 0, 1, 5);

        BossAddButton = new QPushButton(centralwidget);
        BossAddButton->setObjectName("BossAddButton");

        gridLayout->addWidget(BossAddButton, 1, 0, 1, 1);

        ApplyButton = new QPushButton(centralwidget);
        ApplyButton->setObjectName("ApplyButton");

        gridLayout->addWidget(ApplyButton, 1, 1, 1, 1);

        UpdateButton = new QPushButton(centralwidget);
        UpdateButton->setObjectName("UpdateButton");

        gridLayout->addWidget(UpdateButton, 1, 3, 1, 1);

        BossDataBase->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BossDataBase);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 873, 21));
        BossDataBase->setMenuBar(menubar);
        statusbar = new QStatusBar(BossDataBase);
        statusbar->setObjectName("statusbar");
        BossDataBase->setStatusBar(statusbar);

        retranslateUi(BossDataBase);

        QMetaObject::connectSlotsByName(BossDataBase);
    } // setupUi

    void retranslateUi(QMainWindow *BossDataBase)
    {
        BossDataBase->setWindowTitle(QCoreApplication::translate("BossDataBase", "MainWindow", nullptr));
        BossBackButton->setText(QCoreApplication::translate("BossDataBase", "Back", nullptr));
        BossDeleteButton->setText(QCoreApplication::translate("BossDataBase", "Delete", nullptr));
        BossAddButton->setText(QCoreApplication::translate("BossDataBase", "Add", nullptr));
        ApplyButton->setText(QCoreApplication::translate("BossDataBase", "Apply", nullptr));
        UpdateButton->setText(QCoreApplication::translate("BossDataBase", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BossDataBase: public Ui_BossDataBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOSSDATABASE_H
