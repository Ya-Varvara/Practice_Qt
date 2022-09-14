#ifndef ADD_ML_H
#define ADD_ML_H

#include <QDialog>
#include "window.h"

namespace Ui {
class add_ml;
}

class add_ml : public QDialog
{
    Q_OBJECT

public:
    explicit add_ml(QWidget *parent = nullptr);
    ~add_ml();

private slots:
    void on_Exit_button_clicked();

    void on_Add_button_clicked();

private:
    Ui::add_ml *ui;
};

#endif // ADD_ML_H
