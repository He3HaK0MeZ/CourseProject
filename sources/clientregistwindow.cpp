#include "clientregistwindow.h"
#include "ui_clientregistwindow.h"

ClientRegistWindow::ClientRegistWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientRegistWindow)
{
    ui->setupUi(this);

    // Инициализируем окна
    orderWindow = new ClientOrderWindow();

    // Подключаем к слоту запуска окна входа по кнопке выхода в окне заказов
    connect(orderWindow, &ClientOrderWindow::clientWin, this, &ClientRegistWindow::show);
}

ClientRegistWindow::~ClientRegistWindow()
{
    delete ui;
}

void ClientRegistWindow::on_buttonBox_rejected()
{
    this->close();
    emit clientWin();
}


void ClientRegistWindow::on_buttonBox_accepted()
{
    orderWindow->show();
    this->close();
}

