#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Инициализируем окна
    courierWindow = new CourierWindow();
    adminWindow = new AdminWindow();
    clientWindow = new ClientWindow();

    // Подключаем к слоту запуска главного окна по кнопке выхода в следующем окне
    connect(courierWindow, &CourierWindow::firstWindow, this, &MainWindow::show);
    connect(adminWindow, &AdminWindow::firstWindow, this, &MainWindow::show);
    connect(clientWindow, &ClientWindow::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    clientWindow->show();    // Показываем окно клиента
    this->close();      // Закрываем окно
}

void MainWindow::on_pushButton_2_clicked()
{
    courierWindow->show();    // Показываем окно курьера
    this->close();      // Закрываем окно
}

void MainWindow::on_pushButton_3_clicked()
{
    adminWindow->show();    // Показываем окно администратора
    this->close();      // Закрываем окно
}

void MainWindow::on_pushButton_4_clicked()
{
    QApplication::quit();          // Завершаем работу приложения
}

