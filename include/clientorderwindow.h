#ifndef CLIENTORDERWINDOW_H
#define CLIENTORDERWINDOW_H

#include <QWidget>

namespace Ui {
class ClientOrderWindow;
}

class ClientOrderWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ClientOrderWindow(QWidget *parent = nullptr);
    ~ClientOrderWindow();

signals:
    void clientWin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ClientOrderWindow *ui;
};

#endif // CLIENTORDERWINDOW_H
