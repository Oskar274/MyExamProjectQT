/********************************************************************************
** Form generated from reading UI file 'databaseaddboss.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEADDBOSS_H
#define UI_DATABASEADDBOSS_H

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

class Ui_DataBaseAddBoss
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *BossPasswordEdit;
    QLineEdit *BossNameEdit;
    QLineEdit *BossDepartamentEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *BossAddButton;
    QPushButton *BossCancelButton;
    QLabel *label_6;
    QLineEdit *BossSalaryEdit;
    QLineEdit *BossPhoneNumberEdit;
    QLabel *label_9;
    QLineEdit *BossEducationEdit;
    QLabel *label_5;
    QLineEdit *BossLoginEdit;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *BossSecondNameEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DataBaseAddBoss)
    {
        if (DataBaseAddBoss->objectName().isEmpty())
            DataBaseAddBoss->setObjectName("DataBaseAddBoss");
        DataBaseAddBoss->resize(800, 600);
        centralwidget = new QWidget(DataBaseAddBoss);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        BossPasswordEdit = new QLineEdit(centralwidget);
        BossPasswordEdit->setObjectName("BossPasswordEdit");
        BossPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(BossPasswordEdit, 8, 1, 1, 1);

        BossNameEdit = new QLineEdit(centralwidget);
        BossNameEdit->setObjectName("BossNameEdit");

        gridLayout->addWidget(BossNameEdit, 1, 1, 1, 1);

        BossDepartamentEdit = new QLineEdit(centralwidget);
        BossDepartamentEdit->setObjectName("BossDepartamentEdit");

        gridLayout->addWidget(BossDepartamentEdit, 6, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        BossAddButton = new QPushButton(centralwidget);
        BossAddButton->setObjectName("BossAddButton");

        horizontalLayout->addWidget(BossAddButton);

        BossCancelButton = new QPushButton(centralwidget);
        BossCancelButton->setObjectName("BossCancelButton");

        horizontalLayout->addWidget(BossCancelButton);


        gridLayout->addLayout(horizontalLayout, 9, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        BossSalaryEdit = new QLineEdit(centralwidget);
        BossSalaryEdit->setObjectName("BossSalaryEdit");

        gridLayout->addWidget(BossSalaryEdit, 4, 1, 1, 1);

        BossPhoneNumberEdit = new QLineEdit(centralwidget);
        BossPhoneNumberEdit->setObjectName("BossPhoneNumberEdit");

        gridLayout->addWidget(BossPhoneNumberEdit, 3, 1, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        BossEducationEdit = new QLineEdit(centralwidget);
        BossEducationEdit->setObjectName("BossEducationEdit");

        gridLayout->addWidget(BossEducationEdit, 5, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        BossLoginEdit = new QLineEdit(centralwidget);
        BossLoginEdit->setObjectName("BossLoginEdit");

        gridLayout->addWidget(BossLoginEdit, 7, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        BossSecondNameEdit = new QLineEdit(centralwidget);
        BossSecondNameEdit->setObjectName("BossSecondNameEdit");

        gridLayout->addWidget(BossSecondNameEdit, 2, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 8, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        DataBaseAddBoss->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DataBaseAddBoss);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        DataBaseAddBoss->setMenuBar(menubar);
        statusbar = new QStatusBar(DataBaseAddBoss);
        statusbar->setObjectName("statusbar");
        DataBaseAddBoss->setStatusBar(statusbar);

        retranslateUi(DataBaseAddBoss);

        QMetaObject::connectSlotsByName(DataBaseAddBoss);
    } // setupUi

    void retranslateUi(QMainWindow *DataBaseAddBoss)
    {
        DataBaseAddBoss->setWindowTitle(QCoreApplication::translate("DataBaseAddBoss", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("DataBaseAddBoss", "Salary", nullptr));
        label_7->setText(QCoreApplication::translate("DataBaseAddBoss", "Login for Boss", nullptr));
        BossPasswordEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddBoss", "Boss password", nullptr));
        BossNameEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddBoss", "Boss name", nullptr));
        BossDepartamentEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddBoss", "Boss departament", nullptr));
        BossAddButton->setText(QCoreApplication::translate("DataBaseAddBoss", "OK", nullptr));
        BossCancelButton->setText(QCoreApplication::translate("DataBaseAddBoss", "Cancel", nullptr));
        label_6->setText(QCoreApplication::translate("DataBaseAddBoss", "Departament", nullptr));
        BossSalaryEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddBoss", "Boss salary", nullptr));
        BossPhoneNumberEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddBoss", "Boss phone number", nullptr));
        label_9->setText(QCoreApplication::translate("DataBaseAddBoss", "Enter information about new Boss", nullptr));
        BossEducationEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddBoss", "Boss education", nullptr));
        label_5->setText(QCoreApplication::translate("DataBaseAddBoss", "Education", nullptr));
        BossLoginEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddBoss", "Boss login", nullptr));
        label_8->setText(QCoreApplication::translate("DataBaseAddBoss", "Password for Boss", nullptr));
        label->setText(QCoreApplication::translate("DataBaseAddBoss", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("DataBaseAddBoss", "Second name", nullptr));
        BossSecondNameEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddBoss", "Boss second name", nullptr));
        label_3->setText(QCoreApplication::translate("DataBaseAddBoss", "Phone number", nullptr));
        checkBox->setText(QCoreApplication::translate("DataBaseAddBoss", "Show password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataBaseAddBoss: public Ui_DataBaseAddBoss {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEADDBOSS_H
