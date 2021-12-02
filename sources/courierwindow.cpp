#include "courierwindow.h"
#include "ui_courierwindow.h"

CourierWindow::CourierWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CourierWindow)
{
    ui->setupUi(this);
}

CourierWindow::~CourierWindow()
{
    delete ui;
}

void CourierWindow::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}
