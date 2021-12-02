#ifndef CLIENTREGISTWINDOW_H
#define CLIENTREGISTWINDOW_H

#include <QDialog>
#include "clientorderwindow.h"

namespace Ui {
class ClientRegistWindow;
}

class ClientRegistWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClientRegistWindow(QWidget *parent = nullptr);
    ~ClientRegistWindow();

signals:
    void clientWin();

private slots:

    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::ClientRegistWindow *ui;

    ClientOrderWindow *orderWindow;
};

#endif // CLIENTREGISTWINDOW_H
