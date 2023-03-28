#include "signin.h"
#include "ui_signin.h"
#include <QString>
#include <functional>
#include<QSqlQuery>
#include<string>
#include<QByteArray>
#include<QCryptographicHash>
#include<iostream>
#include <QtGui>

SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

SignIn::~SignIn()
{
    delete ui;
}
QString hashedPassword(QString password)
{
    QByteArray pswNsalt (password.toStdString().c_str()) ;
   // pswNsalt.append(STR_SALT_KEY) ;
    QString hashedSaltedPsw = QCryptographicHash::hash(pswNsalt, QCryptographicHash::Sha256).toHex() ;
    return  hashedSaltedPsw;
}
void insertData(QString username, QString password, QString name, QString phone, QString city)
{
    QString sQuerry="INSERT INTO [dbo].[users]([username],[password],[name],[phone],[city])VALUES(:username,:password,:name,:phone,:city)";

    QSqlQuery qry;
    qry.prepare(sQuerry);
   // qry.bindValue(":username","ana");
    qry.bindValue(":username", username);
    qry.bindValue(":password", password);
    qry.bindValue(":name", name);
    qry.bindValue(":phone",phone);
    qry.bindValue(":city", city);
    if(qry.exec())
    {
        qDebug()<<"Data inserted.";
    }
}
void SignIn::on_pushButton_Next_clicked()
{
    hide();
    qDebug()<<"Sign in...";
    QString username=ui->lineEdit_Username->text();
    QString password=ui->lineEdit_Password->text();
    QString name=ui->lineEdit_Name->text();
    QString phone=ui->lineEdit_Phone->text();
    QString city=ui->lineEdit_City->text();
    qDebug()<<"Username:"<<username;
    qDebug()<<"Password:"<<password;
    qDebug()<<"Name:"<<name;
    qDebug()<<"Phone:"<<phone;
    qDebug()<<"City:"<<city;

    qDebug()<<hashedPassword(password);
    qDebug()<<hashedPassword(name);

    insertData(username,hashedPassword(password),name,phone,city);
}

