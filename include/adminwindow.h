#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QWidget>
#include "clientdbwindow.h"

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::AdminWindow *ui;

    ClientDbWindow *clientDbWindow;
};

#endif // ADMINWINDOW_H
