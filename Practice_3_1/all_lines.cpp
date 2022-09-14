#include "all_lines.h"
#include "ui_all_lines.h"

All_lines::All_lines(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::All_lines)
{
    ui->setupUi(this);
    OutputAllLinesToGrid(ui->Table_of_lines);
}

All_lines::~All_lines()
{
    delete ui;
}

void All_lines::on_Exit_button_clicked()
{
    Window *win = new Window;
    win->show();
    close();
}

