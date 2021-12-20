#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    // Инициализируем окна
    clientDbWindow = new ClientDbWindow();

    // Подключаем к слоту запуска окна меню клиента по кнопке в окнах регистрации, входа
    connect(clientDbWindow, &ClientDbWindow::adminWin, this, &AdminWindow::show);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_pushButton_clicked()
{
    clientDbWindow->show();
    this->close();
}

void AdminWindow::on_pushButton_2_clicked()
{

}

void AdminWindow::on_pushButton_3_clicked()
{
    this->close();
    emit firstWindow();
}
