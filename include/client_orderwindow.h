#ifndef CLIENT_ORDERWINDOW_H
#define CLIENT_ORDERWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <clientdatabase.h>

namespace Ui {
class ClientOrderWindow;
}

class ClientOrderWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClientOrderWindow(QWidget *parent = nullptr);
    ~ClientOrderWindow();

signals:
    void clientWin();

private slots:

    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::ClientOrderWindow *ui;
    ClientDatabase *db;
};

#endif // CLIENT_ORDERWINDOW_H
