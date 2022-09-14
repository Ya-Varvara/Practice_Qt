#ifndef LINES_BY_YEAR_H
#define LINES_BY_YEAR_H

#include <QDialog>
#include "window.h"

namespace Ui {
class lines_by_year;
}

class lines_by_year : public QDialog
{
    Q_OBJECT

public:
    explicit lines_by_year(QWidget *parent = nullptr);
    ~lines_by_year();

private slots:
    void on_Exit_button_clicked();

    void on_Find_button_clicked();

private:
    Ui::lines_by_year *ui;
};

#endif // LINES_BY_YEAR_H
