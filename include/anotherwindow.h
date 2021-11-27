#ifndef ANOTHERWINDOW_H
#define ANOTHERWINDOW_H

#include <QWidget>

namespace Ui {
class AnotherWindow;
}

class AnotherWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AnotherWindow(QWidget *parent = nullptr);
    ~AnotherWindow();

signals:
    void firstWindow();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

private:
    Ui::AnotherWindow *ui;
};

#endif // ANOTHERWINDOW_H
