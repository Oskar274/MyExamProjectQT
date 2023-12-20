/********************************************************************************
** Form generated from reading UI file 'autorization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORIZATION_H
#define UI_AUTORIZATION_H

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

class Ui_Autorization
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *PasswordLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *NextButton;
    QPushButton *BackButton;
    QLineEdit *LoginLineEdit;
    QLabel *PasswordLabel;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox;
    QLabel *LoginLablel;
    QSpacerItem *verticalSpacer_2;
    QLabel *ErrorLabel;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Autorization)
    {
        if (Autorization->objectName().isEmpty())
            Autorization->setObjectName("Autorization");
        Autorization->resize(800, 600);
        centralwidget = new QWidget(Autorization);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        PasswordLineEdit = new QLineEdit(centralwidget);
        PasswordLineEdit->setObjectName("PasswordLineEdit");
        PasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(PasswordLineEdit, 3, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        NextButton = new QPushButton(centralwidget);
        NextButton->setObjectName("NextButton");

        horizontalLayout->addWidget(NextButton);

        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName("BackButton");

        horizontalLayout->addWidget(BackButton);


        gridLayout->addLayout(horizontalLayout, 5, 2, 1, 1);

        LoginLineEdit = new QLineEdit(centralwidget);
        LoginLineEdit->setObjectName("LoginLineEdit");

        gridLayout->addWidget(LoginLineEdit, 2, 2, 1, 1);

        PasswordLabel = new QLabel(centralwidget);
        PasswordLabel->setObjectName("PasswordLabel");

        gridLayout->addWidget(PasswordLabel, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 3, 3, 1, 1);

        LoginLablel = new QLabel(centralwidget);
        LoginLablel->setObjectName("LoginLablel");

        gridLayout->addWidget(LoginLablel, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 2, 1, 1);

        ErrorLabel = new QLabel(centralwidget);
        ErrorLabel->setObjectName("ErrorLabel");

        gridLayout->addWidget(ErrorLabel, 4, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        Autorization->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Autorization);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Autorization->setMenuBar(menubar);
        statusbar = new QStatusBar(Autorization);
        statusbar->setObjectName("statusbar");
        Autorization->setStatusBar(statusbar);

        retranslateUi(Autorization);

        QMetaObject::connectSlotsByName(Autorization);
    } // setupUi

    void retranslateUi(QMainWindow *Autorization)
    {
        Autorization->setWindowTitle(QCoreApplication::translate("Autorization", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("Autorization", "Enter Login and Password", nullptr));
        PasswordLineEdit->setPlaceholderText(QCoreApplication::translate("Autorization", "Passowrd", nullptr));
        NextButton->setText(QCoreApplication::translate("Autorization", "OK", nullptr));
        BackButton->setText(QCoreApplication::translate("Autorization", "Cancel", nullptr));
        LoginLineEdit->setPlaceholderText(QCoreApplication::translate("Autorization", "Login", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("Autorization", "Password", nullptr));
        checkBox->setText(QCoreApplication::translate("Autorization", "Show Password", nullptr));
        LoginLablel->setText(QCoreApplication::translate("Autorization", "Login", nullptr));
        ErrorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Autorization: public Ui_Autorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZATION_H
