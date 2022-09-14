#include "lines_by_year.h"
#include "ui_lines_by_year.h"

lines_by_year::lines_by_year(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lines_by_year)
{
    ui->setupUi(this);
}

lines_by_year::~lines_by_year()
{
    delete ui;
}

void lines_by_year::on_Exit_button_clicked()
{
    Window *win = new Window;
    win->show();
    close();
}


void lines_by_year::on_Find_button_clicked()
{
    int year;
    QList <Metro_Line> ml;
    year = ui->year_line->text().toInt();
    ml = TakeLinesByYear(year);
    ui->table_of_lines->setRowCount(0);
    OutputToGrid(ui->table_of_lines, ml);
}

