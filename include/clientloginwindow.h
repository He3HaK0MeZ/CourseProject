#ifndef CLIENTLOGINWINDOW_H
#define CLIENTLOGINWINDOW_H

#include <QDialog>
#include "clientorderwindow.h"

namespace Ui {
class ClientLoginWindow;
}

class ClientLoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClientLoginWindow(QWidget *parent = nullptr);
    ~ClientLoginWindow();

signals:
    void clientWin();

private slots:

    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::ClientLoginWindow *ui;

    ClientOrderWindow *orderWindow;
};

#endif // CLIENTLOGINWINDOW_H
