/********************************************************************************
** Form generated from reading UI file 'productdatabase.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTDATABASE_H
#define UI_PRODUCTDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductDataBase
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *ProductTableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *ProductAdd;
    QPushButton *ApplyButton;
    QPushButton *ProductDelete;
    QPushButton *UpdateButton;
    QPushButton *ProductBackButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProductDataBase)
    {
        if (ProductDataBase->objectName().isEmpty())
            ProductDataBase->setObjectName("ProductDataBase");
        ProductDataBase->resize(800, 600);
        centralwidget = new QWidget(ProductDataBase);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        ProductTableView = new QTableView(centralwidget);
        ProductTableView->setObjectName("ProductTableView");

        gridLayout->addWidget(ProductTableView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ProductAdd = new QPushButton(centralwidget);
        ProductAdd->setObjectName("ProductAdd");

        horizontalLayout->addWidget(ProductAdd);

        ApplyButton = new QPushButton(centralwidget);
        ApplyButton->setObjectName("ApplyButton");

        horizontalLayout->addWidget(ApplyButton);

        ProductDelete = new QPushButton(centralwidget);
        ProductDelete->setObjectName("ProductDelete");

        horizontalLayout->addWidget(ProductDelete);

        UpdateButton = new QPushButton(centralwidget);
        UpdateButton->setObjectName("UpdateButton");

        horizontalLayout->addWidget(UpdateButton);

        ProductBackButton = new QPushButton(centralwidget);
        ProductBackButton->setObjectName("ProductBackButton");

        horizontalLayout->addWidget(ProductBackButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        ProductDataBase->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProductDataBase);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ProductDataBase->setMenuBar(menubar);
        statusbar = new QStatusBar(ProductDataBase);
        statusbar->setObjectName("statusbar");
        ProductDataBase->setStatusBar(statusbar);

        retranslateUi(ProductDataBase);

        QMetaObject::connectSlotsByName(ProductDataBase);
    } // setupUi

    void retranslateUi(QMainWindow *ProductDataBase)
    {
        ProductDataBase->setWindowTitle(QCoreApplication::translate("ProductDataBase", "MainWindow", nullptr));
        ProductAdd->setText(QCoreApplication::translate("ProductDataBase", "Add", nullptr));
        ApplyButton->setText(QCoreApplication::translate("ProductDataBase", "Apply", nullptr));
        ProductDelete->setText(QCoreApplication::translate("ProductDataBase", "Delete", nullptr));
        UpdateButton->setText(QCoreApplication::translate("ProductDataBase", "Update", nullptr));
        ProductBackButton->setText(QCoreApplication::translate("ProductDataBase", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductDataBase: public Ui_ProductDataBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTDATABASE_H
