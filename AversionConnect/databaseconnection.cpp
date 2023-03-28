#include "databaseconnection.h"

databaseConnection::databaseConnection()
{
    qDebug()<<"Start";
    QSqlDatabase mDatabase;
    mDatabase = QSqlDatabase::addDatabase("QODBC");
    QString dsn = "DRIVER={SQL Server};SERVER=2648-ATM-5600N\\SQLEXPRESS;DATABASE=AversionConnect;UID=2648-ATM-5600N\nicoleta.cucos;Trusted_Connection=Yes;";
        qDebug() << "DSN: " << dsn;
        mDatabase.setDatabaseName(dsn);
    if(!mDatabase.open())
    {
        qDebug()<<"Error: "<<mDatabase.lastError().text();
    }
    else
    {
        qDebug()<<"Succes!";
    }

   // mDatabase.close();
    qDebug()<<"End";

}
