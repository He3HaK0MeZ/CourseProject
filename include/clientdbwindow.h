#ifndef CLIENTDBWINDOW_H
#define CLIENTDBWINDOW_H

#include <QWidget>
#include <QSqlTableModel>
#include "clientdatabase.h"

namespace Ui {
class ClientDbWindow;
}

class ClientDbWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ClientDbWindow(QWidget *parent = nullptr);
    ~ClientDbWindow();

signals:
    void adminWin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ClientDbWindow *ui;
    /* В проекте используются объекты для взаимодействия с информацией в базе данных
     * и моделью представления таблицы базы данных
     * */
    ClientDatabase *db;
    QSqlTableModel *model;

private:
    /* Также присутствуют два метода, которые формируют модель
     * и внешний вид TableView
     * */
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
};

#endif // CLIENTDBWINDOW_H
