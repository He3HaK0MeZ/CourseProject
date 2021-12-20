#ifndef CLIENTDATABASE_H
#define CLIENTDATABASE_H

#include <QObject>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QFile>
#include <QSqlError>

/* Директивы имен таблицы, полей таблицы и базы данных */
#define DATABASE_HOSTNAME   "ClientDataBase"
#define DATABASE_NAME       "ClientDataBase.db"

#define TABLE                   "ClientTable"
#define TABLE_NAME              "Name"
#define TABLE_PRODUCT           "Product"
#define TABLE_ADDRESS           "Address"
#define TABLE_TIME              "Time"

class ClientDatabase : public QObject
{
    Q_OBJECT
public:
    explicit ClientDatabase(QObject *parent = nullptr);
    ~ClientDatabase();
    /* Методы для непосредственной работы с классом
     * Подключение к базе данных и вставка записаей в таблицу
     * */
    void connectToDataBase();
    bool insertIntoTable(const QVariantList &data);
    void closeDataBase();

private:
    // Сам объект базы данных, с которым будет произодиться работа
    QSqlDatabase    db;

private:
    /* Внутренние методы для работы с базой данных
     * */
    bool openDataBase();
    bool restoreDataBase();
    bool createTable();
};

#endif // CLIENTDATABASE_H
