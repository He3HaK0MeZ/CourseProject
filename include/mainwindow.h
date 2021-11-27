#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "anotherwindow.h"

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
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    // Второе окно
    AnotherWindow *secondWindow;
};

#endif // MAINWINDOW_H
