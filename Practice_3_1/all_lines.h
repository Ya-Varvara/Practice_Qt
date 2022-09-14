#ifndef ALL_LINES_H
#define ALL_LINES_H

#include <QDialog>
#include "window.h"

namespace Ui {
class All_lines;
}

class All_lines : public QDialog
{
    Q_OBJECT

public:
    explicit All_lines(QWidget *parent = nullptr);
    ~All_lines();

private slots:
    void on_Exit_button_clicked();

private:
    Ui::All_lines *ui;
};

#endif // ALL_LINES_H
