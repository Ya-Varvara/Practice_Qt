#ifndef DELETE_ML_H
#define DELETE_ML_H

#include <QDialog>
#include "window.h"

namespace Ui {
class Delete_ml;
}

class Delete_ml : public QDialog
{
    Q_OBJECT

public:
    explicit Delete_ml(QWidget *parent = nullptr);
    ~Delete_ml();

private slots:
    void on_Exit_button_clicked();

    void on_Delete_button_clicked();

private:
    Ui::Delete_ml *ui;
};

#endif // DELETE_ML_H
