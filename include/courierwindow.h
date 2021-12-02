#ifndef COURIERWINDOW_H
#define COURIERWINDOW_H

#include <QWidget>

namespace Ui {
class CourierWindow;
}

class CourierWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CourierWindow(QWidget *parent = nullptr);
    ~CourierWindow();

signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CourierWindow *ui;
};

#endif // COURIERWINDOW_H
