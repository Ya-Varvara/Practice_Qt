#include "window.h"
#include "ui_window.h"
#include "WorkWithData.h"
#include <QInputDialog>

Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);
    SetFile();
}

Window::~Window()
{
    delete ui;
}


void Window::on_Exit_button_clicked()
{
    close();
}



void Window::on_Add_Line_button_clicked()
{
    add_ml *add_line = new add_ml();
    close();
    add_line->show();
}


void Window::on_Delete_Line_button_clicked()
{
    Delete_ml *delete_line = new Delete_ml;
    close();
    delete_line->show();

}


void Window::on_Show_Lines_button_clicked()
{
    All_lines *all_ml = new All_lines;
    close();
    all_ml->show();
}


void Window::on_Lines_by_year_button_clicked()
{
    lines_by_year *by_year = new lines_by_year;
    close();
    by_year->show();
}


void Window::on_Average_length_button_clicked()
{
    average_l *avl = new average_l;
    avl->show();
    close();
}


void Window::on_Graphics_button_clicked()
{
    Graphics *gr = new Graphics;
    gr->show();
    close();
}

