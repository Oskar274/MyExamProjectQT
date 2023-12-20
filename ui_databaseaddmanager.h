/********************************************************************************
** Form generated from reading UI file 'databaseaddmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEADDMANAGER_H
#define UI_DATABASEADDMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataBaseAddManager
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *NameLabel;
    QLineEdit *MangerSalaryEdit;
    QLineEdit *MangerSecondNameEdit;
    QLineEdit *MangerEducationEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *MangerPasswordEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *ManagerAddButton;
    QPushButton *ManagerBackButton;
    QLabel *label_8;
    QLineEdit *MangerNameEdit;
    QLineEdit *MangerPhoneNumberEdit;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *MangerLoginEdit;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DataBaseAddManager)
    {
        if (DataBaseAddManager->objectName().isEmpty())
            DataBaseAddManager->setObjectName("DataBaseAddManager");
        DataBaseAddManager->resize(800, 600);
        centralwidget = new QWidget(DataBaseAddManager);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        NameLabel = new QLabel(centralwidget);
        NameLabel->setObjectName("NameLabel");

        gridLayout->addWidget(NameLabel, 1, 0, 1, 1);

        MangerSalaryEdit = new QLineEdit(centralwidget);
        MangerSalaryEdit->setObjectName("MangerSalaryEdit");

        gridLayout->addWidget(MangerSalaryEdit, 4, 1, 1, 1);

        MangerSecondNameEdit = new QLineEdit(centralwidget);
        MangerSecondNameEdit->setObjectName("MangerSecondNameEdit");

        gridLayout->addWidget(MangerSecondNameEdit, 2, 1, 1, 1);

        MangerEducationEdit = new QLineEdit(centralwidget);
        MangerEducationEdit->setObjectName("MangerEducationEdit");

        gridLayout->addWidget(MangerEducationEdit, 5, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        MangerPasswordEdit = new QLineEdit(centralwidget);
        MangerPasswordEdit->setObjectName("MangerPasswordEdit");
        MangerPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(MangerPasswordEdit, 7, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ManagerAddButton = new QPushButton(centralwidget);
        ManagerAddButton->setObjectName("ManagerAddButton");

        horizontalLayout->addWidget(ManagerAddButton);

        ManagerBackButton = new QPushButton(centralwidget);
        ManagerBackButton->setObjectName("ManagerBackButton");

        horizontalLayout->addWidget(ManagerBackButton);


        gridLayout->addLayout(horizontalLayout, 8, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        MangerNameEdit = new QLineEdit(centralwidget);
        MangerNameEdit->setObjectName("MangerNameEdit");

        gridLayout->addWidget(MangerNameEdit, 1, 1, 1, 1);

        MangerPhoneNumberEdit = new QLineEdit(centralwidget);
        MangerPhoneNumberEdit->setObjectName("MangerPhoneNumberEdit");

        gridLayout->addWidget(MangerPhoneNumberEdit, 3, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        MangerLoginEdit = new QLineEdit(centralwidget);
        MangerLoginEdit->setObjectName("MangerLoginEdit");

        gridLayout->addWidget(MangerLoginEdit, 6, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 7, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 2, 1, 1);

        DataBaseAddManager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DataBaseAddManager);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        DataBaseAddManager->setMenuBar(menubar);
        statusbar = new QStatusBar(DataBaseAddManager);
        statusbar->setObjectName("statusbar");
        DataBaseAddManager->setStatusBar(statusbar);

        retranslateUi(DataBaseAddManager);

        QMetaObject::connectSlotsByName(DataBaseAddManager);
    } // setupUi

    void retranslateUi(QMainWindow *DataBaseAddManager)
    {
        DataBaseAddManager->setWindowTitle(QCoreApplication::translate("DataBaseAddManager", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("DataBaseAddManager", "Salary", nullptr));
        NameLabel->setText(QCoreApplication::translate("DataBaseAddManager", "Name", nullptr));
        MangerSalaryEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddManager", "Salary", nullptr));
        MangerSecondNameEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddManager", "SecondName", nullptr));
        MangerEducationEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddManager", "Education", nullptr));
        label_2->setText(QCoreApplication::translate("DataBaseAddManager", "SecondName", nullptr));
        label_3->setText(QCoreApplication::translate("DataBaseAddManager", "Phone number", nullptr));
        MangerPasswordEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddManager", "Password for manager", nullptr));
        ManagerAddButton->setText(QCoreApplication::translate("DataBaseAddManager", "OK", nullptr));
        ManagerBackButton->setText(QCoreApplication::translate("DataBaseAddManager", "Cancel", nullptr));
        label_8->setText(QCoreApplication::translate("DataBaseAddManager", "Enter information about new manager", nullptr));
        MangerNameEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddManager", "Name", nullptr));
        MangerPhoneNumberEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddManager", "Phone number", nullptr));
        label_5->setText(QCoreApplication::translate("DataBaseAddManager", "Education", nullptr));
        label_7->setText(QCoreApplication::translate("DataBaseAddManager", "Password for manager", nullptr));
        MangerLoginEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddManager", "Login for manager", nullptr));
        label_6->setText(QCoreApplication::translate("DataBaseAddManager", "Login for manager", nullptr));
        checkBox->setText(QCoreApplication::translate("DataBaseAddManager", "Show password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataBaseAddManager: public Ui_DataBaseAddManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEADDMANAGER_H
