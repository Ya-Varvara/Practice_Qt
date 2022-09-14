#ifndef WORKWITHDATA_H
#define WORKWITHDATA_H

#include <string>
#include <QTableWidget>
#include <QString>

// Запись о линии метро
struct Metro_Line {
    int id;
    std::string name;
    int open_year;
    int length;
    int num_of_stations;
};


void SetFile();
void AddMetro_Line(Metro_Line &ml);
QList <Metro_Line> TakeAllLines();
QList <Metro_Line> TakeAllSortedLines();
QList <Metro_Line> TakeLinesByYear(int year);
QList <Metro_Line> TakeLinesById();
//void DeleteMetro_Line(int id, QString name);
float AverageLength(int id, std::string name);
void OutputLineToGrid(QTableWidget *wid, Metro_Line ml);
void OutputToGrid(QTableWidget *wid, QList <Metro_Line> Lines);
void OutputAllLinesToGrid(QTableWidget *wid);
int MaxStations();

#endif // WORKWITHDATA_H
