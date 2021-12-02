#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QWidget>

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

private:
    Ui::AdminWindow *ui;
};

#endif // ADMINWINDOW_H
