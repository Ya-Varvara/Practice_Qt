#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QDialog>
#include <QWidget>
#include <QtGui>
#include "window.h"

namespace Ui {
class Graphics;
}

class Graphics : public QDialog
{
    Q_OBJECT

public:
    explicit Graphics(QWidget *parent = nullptr);
    ~Graphics();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_exit_button_clicked();

private:
    Ui::Graphics *ui;
};

#endif // GRAPHICS_H
