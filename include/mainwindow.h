#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "courierwindow.h"
#include "adminwindow.h"
#include "clientwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Слоты от кнопок главного экрана
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;

    CourierWindow *courierWindow;
    AdminWindow *adminWindow;
    ClientWindow *clientWindow;
};

#endif // MAINWINDOW_H
