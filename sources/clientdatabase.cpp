#include "clientdatabase.h"

ClientDatabase::ClientDatabase(QObject *parent) : QObject(parent)
{

}

ClientDatabase::~ClientDatabase()
{

}

/* Методы для подключения к базе данных
 * */
void ClientDatabase::connectToDataBase()
{
    /* Перед подключением к базе данных производим проверку на её существование.
     * В зависимости от результата производим открытие базы данных или её восстановление
     * */
    if(!QFile("/home/egor/CourseProject/" DATABASE_NAME).exists()) {
        this->restoreDataBase();
    } else {
        this->openDataBase();
    }
}

/* Методы восстановления базы данных
 * */
bool ClientDatabase::restoreDataBase()
{
    if(this->openDataBase()) {
        if(!this->createTable()) {
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не удалось восстановить базу данных";
        return false;
}
    return false;
}

/* Метод для открытия базы данных
 * */
bool ClientDatabase::openDataBase()
{
    /* База данных открывается по заданному пути
     * и имени базы данных, если она существует
     * */
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOSTNAME);
    db.setDatabaseName("/home/egor/CourseProject/" DATABASE_NAME);
    if (db.open()) {
        return true;
    } else {
        return false;
    }
}

/* Метод закрытия базы данных
 * */
void ClientDatabase::closeDataBase()
{
    db.close();
}

/* Метод для создания таблицы в базе данных
 * */
bool ClientDatabase::createTable()
{
    /* В данном случае используется формирование сырого SQL-запроса
     * с последующим его выполнением.
     * */
    QSqlQuery query;
    if (!query.exec( "CREATE TABLE " TABLE " ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    TABLE_NAME          " TEXT NOT NULL,"
                    TABLE_PRODUCT         " TEXT NOT NULL,"
                    TABLE_ADDRESS       " TEXT NOT NULL,"
                    TABLE_TIME          " TEXT NOT NULL"
                    " )"
                    )){
        qDebug() << "DataBase: error of create " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}

/* Метод для вставки записи в базу данных
 * */
bool ClientDatabase::insertIntoTable(const QVariantList &data)
{
    /* Запрос SQL формируется из QVariantList,
     * в который передаются данные для вставки в таблицу.
     * */
    QSqlQuery query;
    /* В начале SQL запрос формируется с ключами,
     * которые потом связываются методом bindValue
     * для подстановки данных из QVariantList
     * */
    query.prepare("INSERT INTO " TABLE " ( " TABLE_NAME ", "
                                             TABLE_PRODUCT ", "
                                             TABLE_ADDRESS ", "
                                             TABLE_TIME " ) "
                  "VALUES (:Name, :Product, :Address, :Time)");
    query.bindValue(":Name",        data[0].toString());
    query.bindValue(":Product",     data[1].toString());
    query.bindValue(":Address",     data[2].toString());
    query.bindValue(":Time",        data[3].toString());
    // После чего выполняется запросом методом exec()
    if(!query.exec()){
        qDebug() << "error insert into " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}
