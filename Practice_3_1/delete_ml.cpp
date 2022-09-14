#include "delete_ml.h"
#include "ui_delete_ml.h"
#include <QMessageBox>
#include "WorkWithData.h"

Delete_ml::Delete_ml(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_ml)
{
    ui->setupUi(this);
    QList <Metro_Line> ml;
    ml = TakeLinesById();
    OutputToGrid(ui->table_of_lines, ml);
}

Delete_ml::~Delete_ml()
{
    delete ui;
}

void Delete_ml::on_Exit_button_clicked()
{
    Window *win = new Window;
    win->show();
    close();
}

void Delete_ml::on_Delete_button_clicked()
{
    int id;
    QString name;

    QMessageBox mess;

    id = ui->id_line->text().toInt();
    name = ui->name_line->text();


    if (DeleteMetro_Line(id, name)) {
        mess.setWindowTitle("Успешно");
        mess.setText("Линия удалена");
        mess.exec();
        ui->table_of_lines->setRowCount(0);
        QList <Metro_Line> ml;
        ml = TakeLinesById();
        OutputToGrid(ui->table_of_lines, ml);
    } else {
        mess.setWindowTitle("Упс...");
        mess.setText("Данной линии не найдено");
        mess.exec();
    }

    ui->id_line->clear();
    ui->name_line->clear();
}

