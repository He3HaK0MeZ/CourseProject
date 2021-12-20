#include "client_window.h"
#include "ui_client_orderwindow.h"

ClientOrderWindow::ClientOrderWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientOrderWindow)
{
    ui->setupUi(this);
}

ClientOrderWindow::~ClientOrderWindow()
{
    delete ui;
}

void ClientOrderWindow::on_pushButton_clicked()
{
    this->close();
    emit clientWin();
}

