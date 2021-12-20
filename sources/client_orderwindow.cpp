#include "client_orderwindow.h"
#include "ui_client_orderwindow.h"

ClientOrderWindow::ClientOrderWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientOrderWindow)
{
    ui->setupUi(this);

    db = new ClientDatabase();
    db->connectToDataBase();
}

ClientOrderWindow::~ClientOrderWindow()
{
    db->closeDataBase();
    delete ui;
}

void ClientOrderWindow::on_buttonBox_rejected()
{
    this->close();
    emit clientWin();
}


void ClientOrderWindow::on_buttonBox_accepted()
{
    QString name = ui->name_line->text();
    QString order = ui->order_line->text();
    QString address = ui->address_line->text();
    QString time = ui->time_line->text();

    QVariantList data;
    data.append(name);
    data.append(order);
    data.append(address);
    data.append(time);
    db->insertIntoTable(data);

    QMessageBox::information(this, "Информация", "Ваш заказ принят");
    emit clientWin();
}

