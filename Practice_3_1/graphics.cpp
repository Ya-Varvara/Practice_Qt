#include "graphics.h"
#include "ui_graphics.h"
#include "math.h"
Graphics::Graphics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graphics)
{
    ui->setupUi(this);
    setFixedSize(QSize(800,500));
}

Graphics::~Graphics()
{
    delete ui;
}

void Graphics::on_exit_button_clicked()
{
    Window *win = new Window;
    win->show();
    close();
}

void Graphics::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);

    QList <Metro_Line> ml = TakeAllSortedLines();
    int X = this->width(), Y = this->height();

    // расчет масштаба и расположение графика
    int xn = ml.at(ml.size()-1).length;     // минимальная длина ветки
    if (xn % 5 != 0) { xn -= xn % 5; }
    int xk = ml.at(0).length;               // максимальная длина ветки
    if (xk % 5 != 0) { xk += 5 - (xk % 5); }

    int yn = 0;             // минимальное кол-во станций
    int yk = MaxStations(); // максимальное кол-во станций
    if (yk % 5 != 0) yk += 5 - (yk % 5);

    int mx = (X - 100)/(xk-xn);
    int my = -(Y - 140)/(yk);

    // рисование сетки

    painter->setPen(Qt::gray);
    std::string s;
    int y = Y-80;
    int x = 50;

    while (yn <= yk) {
        s = std::to_string(yn);
        painter->drawText(25, y+3, s.c_str());
        painter->drawLine(50, y, X-50, y);
        yn += 5;
        y += 5*my;
    }
    s = "станции";
    painter->drawText(25, 40, s.c_str());
    y -= 5*my;
    while (xn <= xk) {
        s = std::to_string(xn);
        painter->drawText(x-10, Y-60, s.c_str());
        painter->drawLine(x, Y-80, x, y);
        xn += 5;
        x += 5*mx;
    }
    s = "(км)";
    painter->drawText(X-40, Y-60, s.c_str());

    // расчет масштаба и расположение графика
    xn = ml.at(ml.size()-1).length;     // минимальная длина ветки
    if (xn % 5 != 0) { xn -= xn % 5; }
    xk = ml.at(0).length;               // максимальная длина ветки
    if (xk % 5 != 0) { xk += 5 - (xk % 5); }

    yn = 0;             // минимальное кол-во станций
    yk = MaxStations(); // максимальное кол-во станций
    if (yk % 5 != 0) yk += 5 - (yk % 5);

    mx = (X - 100)/(xk-xn);
    my = -(Y - 140)/(yk);

    QPen pen(Qt::blue, 3);
    painter->setPen(pen);

    // рисование графика
    int x1, y1, x2, y2;

    x2 = (ml.at(0).length-xn)*mx+50;
    y2 = (Y-80) + ml.at(0).num_of_stations*my;

    for (int i = 1; i < ml.size(); ++i) {
        x1 = x2;
        y1 = y2;
        x2 = (ml.at(i).length-xn)*mx+50;
        y2 = (Y-80) + ml.at(i).num_of_stations*my;
        painter->drawLine(x2, y2, x1, y1);
    }
    painter->end();
}

