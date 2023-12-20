/********************************************************************************
** Form generated from reading UI file 'databaseaddworker.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEADDWORKER_H
#define UI_DATABASEADDWORKER_H

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

class Ui_DataBaseAddWorker
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *NameEdit;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *PhoneNumberEdit;
    QLineEdit *WorkerPasswordEdit;
    QLineEdit *WorkerLoginEdit;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *SalaryEdit;
    QLineEdit *SecondNameEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DataBaseAddWorker)
    {
        if (DataBaseAddWorker->objectName().isEmpty())
            DataBaseAddWorker->setObjectName("DataBaseAddWorker");
        DataBaseAddWorker->resize(800, 600);
        centralwidget = new QWidget(DataBaseAddWorker);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 11, 2, 1, 1);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 7, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        NameEdit = new QLineEdit(centralwidget);
        NameEdit->setObjectName("NameEdit");

        gridLayout->addWidget(NameEdit, 2, 2, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 1);

        PhoneNumberEdit = new QLineEdit(centralwidget);
        PhoneNumberEdit->setObjectName("PhoneNumberEdit");

        gridLayout->addWidget(PhoneNumberEdit, 4, 2, 1, 1);

        WorkerPasswordEdit = new QLineEdit(centralwidget);
        WorkerPasswordEdit->setObjectName("WorkerPasswordEdit");
        WorkerPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(WorkerPasswordEdit, 7, 2, 1, 1);

        WorkerLoginEdit = new QLineEdit(centralwidget);
        WorkerLoginEdit->setObjectName("WorkerLoginEdit");

        gridLayout->addWidget(WorkerLoginEdit, 6, 2, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        SalaryEdit = new QLineEdit(centralwidget);
        SalaryEdit->setObjectName("SalaryEdit");

        gridLayout->addWidget(SalaryEdit, 5, 2, 1, 1);

        SecondNameEdit = new QLineEdit(centralwidget);
        SecondNameEdit->setObjectName("SecondNameEdit");

        gridLayout->addWidget(SecondNameEdit, 3, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 8, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        DataBaseAddWorker->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DataBaseAddWorker);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        DataBaseAddWorker->setMenuBar(menubar);
        statusbar = new QStatusBar(DataBaseAddWorker);
        statusbar->setObjectName("statusbar");
        DataBaseAddWorker->setStatusBar(statusbar);

        retranslateUi(DataBaseAddWorker);

        QMetaObject::connectSlotsByName(DataBaseAddWorker);
    } // setupUi

    void retranslateUi(QMainWindow *DataBaseAddWorker)
    {
        DataBaseAddWorker->setWindowTitle(QCoreApplication::translate("DataBaseAddWorker", "MainWindow", nullptr));
        checkBox->setText(QCoreApplication::translate("DataBaseAddWorker", "Show password", nullptr));
        label_6->setText(QCoreApplication::translate("DataBaseAddWorker", "Password for worker", nullptr));
        label_2->setText(QCoreApplication::translate("DataBaseAddWorker", "Second Name", nullptr));
        label_3->setText(QCoreApplication::translate("DataBaseAddWorker", "Phone nubmer", nullptr));
        NameEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddWorker", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("DataBaseAddWorker", "Login for worker", nullptr));
        label->setText(QCoreApplication::translate("DataBaseAddWorker", "Name", nullptr));
        PhoneNumberEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddWorker", "Phone number", nullptr));
        WorkerPasswordEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddWorker", "Worker password", nullptr));
        WorkerLoginEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddWorker", "Worker Login", nullptr));
        label_9->setText(QCoreApplication::translate("DataBaseAddWorker", "Enter Information about new worker", nullptr));
        label_4->setText(QCoreApplication::translate("DataBaseAddWorker", "Salary", nullptr));
        SalaryEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddWorker", "Salary per month", nullptr));
        SecondNameEdit->setPlaceholderText(QCoreApplication::translate("DataBaseAddWorker", "Second Name", nullptr));
        pushButton->setText(QCoreApplication::translate("DataBaseAddWorker", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DataBaseAddWorker", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataBaseAddWorker: public Ui_DataBaseAddWorker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEADDWORKER_H
