#include "clientwindow.h"
#include "ui_clientwindow.h"

ClientWindow::ClientWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWindow)
{
    ui->setupUi(this);

    // Инициализируем окна
    registWindow = new ClientOrderWindow();

    // Подключаем к слоту запуска окна меню клиента по кнопке в окнах регистрации, входа
    connect(registWindow, &ClientOrderWindow::clientWin, this, &ClientWindow::show);
}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::on_pushButton_clicked()
{
    registWindow->show();
    this->close();
}

void ClientWindow::on_pushButton_2_clicked()
{
    this->close();
    emit firstWindow();
}
