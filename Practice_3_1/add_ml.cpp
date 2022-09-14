#include "add_ml.h"
#include "ui_add_ml.h"
#include <QMessageBox>

add_ml::add_ml(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_ml)
{
    ui->setupUi(this);
}

add_ml::~add_ml()
{
    delete ui;
}

void add_ml::on_Exit_button_clicked()
{
    Window *win = new Window;
    win->show();
    close();
}

void add_ml::on_Add_button_clicked()
{
    Metro_Line ml;
    ml.id = ui->id_line->text().toInt();
    ml.name = ui->name_line->text().toStdString();
    ml.length = ui->length_line->text().toInt();
    ml.num_of_stations = ui->num_of_stations_line->text().toInt();
    ml.open_year = ui->year_line->text().toInt();

    AddMetro_Line(ml);

    QMessageBox mess;
    mess.setWindowTitle("Успешно");
    mess.setText("Линия добавлена");
    mess.exec();

    ui->id_line->clear();
    ui->name_line->clear();
    ui->length_line->clear();
    ui->num_of_stations_line->clear();
    ui->year_line->clear();
}

