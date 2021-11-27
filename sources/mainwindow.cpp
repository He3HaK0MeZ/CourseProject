#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Инициализируем второе окно
    secondWindow = new AnotherWindow();
    // Подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(secondWindow, &AnotherWindow::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    secondWindow->show();    // Показываем второе окно
    this->close();      // Закрываем основное окно
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();          // Закрываем основное окно
}
