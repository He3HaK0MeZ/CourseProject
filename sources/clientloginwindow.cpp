#include "clientloginwindow.h"
#include "ui_clientloginwindow.h"

ClientLoginWindow::ClientLoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientLoginWindow)
{
    ui->setupUi(this);

    // Инициализируем окна
    orderWindow = new ClientOrderWindow();

    // Подключаем к слоту запуска окна входа по кнопке выхода в окне заказов
    connect(orderWindow, &ClientOrderWindow::clientWin, this, &ClientLoginWindow::show);
}

ClientLoginWindow::~ClientLoginWindow()
{
    delete ui;
}

void ClientLoginWindow::on_buttonBox_rejected()
{
    this->close();
    emit clientWin();
}

void ClientLoginWindow::on_buttonBox_accepted()
{
    orderWindow->show();
    this->close();
}

