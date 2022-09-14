#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "WorkWithData.h"
#include "add_ml.h"
#include "delete_ml.h"
#include "Del.h"
#include "all_lines.h"
#include "lines_by_year.h"
#include "average_l.h"
#include "graphics.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();

private slots:
    void on_Add_Line_button_clicked();

    void on_Exit_button_clicked();

    void on_Delete_Line_button_clicked();

    void on_Show_Lines_button_clicked();

    void on_Lines_by_year_button_clicked();

    void on_Average_length_button_clicked();

    void on_Graphics_button_clicked();

private:
    Ui::Window *ui;
};
#endif // WINDOW_H
