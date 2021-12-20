#include "clientdbwindow.h"
#include "ui_clientdbwindow.h"

ClientDbWindow::ClientDbWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientDbWindow)
{
    ui->setupUi(this);
}

ClientDbWindow::~ClientDbWindow()
{
    delete ui;
}

void ClientDbWindow::on_pushButton_clicked()
{
    this->close();
    emit adminWin();
}

