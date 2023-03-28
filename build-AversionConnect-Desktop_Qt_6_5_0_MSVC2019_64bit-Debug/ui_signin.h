/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_Phone;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_City;
    QPushButton *pushButton_Next;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName("SignIn");
        SignIn->resize(500, 500);
        horizontalLayout_2 = new QHBoxLayout(SignIn);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox = new QGroupBox(SignIn);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName("lineEdit_Username");

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineEdit_Name = new QLineEdit(groupBox);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setEchoMode(QLineEdit::Normal);

        horizontalLayout_4->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        lineEdit_Phone = new QLineEdit(groupBox);
        lineEdit_Phone->setObjectName("lineEdit_Phone");

        horizontalLayout_6->addWidget(lineEdit_Phone);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_City = new QLineEdit(groupBox);
        lineEdit_City->setObjectName("lineEdit_City");

        horizontalLayout_5->addWidget(lineEdit_City);


        verticalLayout->addLayout(horizontalLayout_5);

        pushButton_Next = new QPushButton(groupBox);
        pushButton_Next->setObjectName("pushButton_Next");

        verticalLayout->addWidget(pushButton_Next);


        horizontalLayout_2->addWidget(groupBox);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignIn", "Sign In", nullptr));
        label_6->setText(QCoreApplication::translate("SignIn", "Username ", nullptr));
        label_2->setText(QCoreApplication::translate("SignIn", "Password  ", nullptr));
        label_3->setText(QCoreApplication::translate("SignIn", "Name        ", nullptr));
        label_4->setText(QCoreApplication::translate("SignIn", "Phone       ", nullptr));
        label_5->setText(QCoreApplication::translate("SignIn", "City          ", nullptr));
        pushButton_Next->setText(QCoreApplication::translate("SignIn", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
