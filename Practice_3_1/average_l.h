#ifndef AVERAGE_L_H
#define AVERAGE_L_H

#include <QDialog>
#include "window.h"

namespace Ui {
class average_l;
}

class average_l : public QDialog
{
    Q_OBJECT

public:
    explicit average_l(QWidget *parent = nullptr);
    ~average_l();

private slots:
    void on_Exit_button_clicked();

    void on_count_button_clicked();

private:
    Ui::average_l *ui;
};

#endif // AVERAGE_L_H
