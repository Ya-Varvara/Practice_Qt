#include "average_l.h"
#include "ui_average_l.h"
#include <string>
#include "math.h"

average_l::average_l(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::average_l)
{
    ui->setupUi(this);
    //OutputAllLinesToGrid(ui->table_of_lines);

    QList <Metro_Line> ml;
    ml = TakeAllLines();
    OutputToGrid(ui->table_of_lines, ml);
}

average_l::~average_l()
{
    delete ui;
}

void average_l::on_Exit_button_clicked()
{
    Window *win = new Window;
    win->show();
    close();
}

void average_l::on_count_button_clicked()
{
    std::string name;
    int id;
    double len;
    QString l;
    name = ui->name_line->text().toStdString();
    id = ui->id_line->text().toInt();
    len = round(AverageLength(id, name)*100)/100;
    l.setNum(len);
    ui->len_line->setText(l);
}

