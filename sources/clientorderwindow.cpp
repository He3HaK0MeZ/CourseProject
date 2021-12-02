#include "clientorderwindow.h"
#include "ui_clientorderwindow.h"

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

