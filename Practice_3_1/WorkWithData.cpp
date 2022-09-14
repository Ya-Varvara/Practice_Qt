#include "WorkWithData.h"
#include <fstream>
#include <iostream>
#include <QWidgetItem>
#include <QFile>

using namespace std;

string path = "metro_lines.txt";

ostream& operator<<(ostream& os,const Metro_Line &ml){
    char s1[4];
    os << itoa(ml.id, s1, 10) << endl << ml.name <<
          endl << itoa(ml.length, s1, 10) << endl <<
          itoa(ml.num_of_stations, s1, 10) << endl <<
          itoa(ml.open_year, s1, 10) << endl;
    return os;
}

istream& operator>>(istream& is,Metro_Line &ml){
    char* buf = (char*)malloc(255);
    is.getline(buf,255,'\n');
    ml.id = atoi(buf);
    is.getline(buf,255,'\n');
    ml.name = string(buf);
    is.getline(buf,255,'\n');
    ml.length = atoi(buf);
    is.getline(buf,255,'\n');
    ml.num_of_stations = atoi(buf);
    is.getline(buf, 255, '\n');
    ml.open_year = atoi(buf);

    return is;
}


void SetFile() {
    ofstream OutF;
    ifstream InF;

    InF.open(path);
    if (InF.is_open()) {
        InF.close();
        return;
    }
    OutF.open(path);
    Metro_Line m;
    m.id = 1;
    m.name = "Сокольническая";
    m.length = 78;
    m.num_of_stations = 21;
    m.open_year = 1954;
    OutF << m;
    m.id = 2;
    m.name = "Замоскворецкая";
    m.length = 91;
    m.num_of_stations = 24;
    m.open_year = 1955;
    OutF << m;
    m.id = 1;
    m.name = "Калининская";
    m.length = 49;
    m.num_of_stations = 15;
    m.open_year = 1984;
    OutF << m;
    OutF.close();
}


void AddMetro_Line(Metro_Line &ml) {
    ofstream OutF;
    OutF.open(path, ios_base::app);
    OutF << ml;
    OutF.close();
}



QList <Metro_Line> TakeAllLines() {
    QList <Metro_Line> Lines;
    Metro_Line ml;
    ifstream InF;

    InF.open(path);
    while (!InF.eof()) {
        InF >> ml;
        Lines.append(ml);
    }
    Lines.erase(Lines.end()-1);
    InF.close();
    return Lines;
}



bool compare (const Metro_Line &first, const Metro_Line &second) {
    return (first.length > second.length);
}
QList <Metro_Line> TakeAllSortedLines() {
    QList <Metro_Line> Lines = TakeAllLines();
    sort(Lines.begin(), Lines.end(), compare);
    return Lines;
}

bool compare1 (const Metro_Line &first, const Metro_Line &second) {
    return (first.id < second.id);
}
QList <Metro_Line> TakeLinesById() {
    QList <Metro_Line> Lines = TakeAllLines();
    sort(Lines.begin(), Lines.end(), compare1);
    return Lines;
}


QList <Metro_Line> TakeLinesByYear(int year) {
    QList <Metro_Line> Lines = TakeLinesById();
    QList <Metro_Line> LinesByYear;
    for (Metro_Line ml:Lines) {
        if (ml.open_year <= year) {
            LinesByYear.append(ml);
        }
    }
    return LinesByYear;
}

float AverageLength(int id, std::string name) {
    QList <Metro_Line> Lines = TakeAllLines();
    float length;
    for (Metro_Line ml:Lines) {
        if (ml.id == id && ml.name == name) {
            length = ml.length/float(ml.num_of_stations);
        }
    }
    return length;
}




void OutputLineToGrid(QTableWidget *wid, Metro_Line ml){
    wid->setRowCount(wid->rowCount()+1);
    char s[4];
    wid->setItem(wid->rowCount()-1, 0, new QTableWidgetItem(QString(itoa(ml.id, s, 10))));
    wid->setItem(wid->rowCount()-1, 1, new QTableWidgetItem(QString(ml.name.c_str())));
    wid->setItem(wid->rowCount()-1, 2, new QTableWidgetItem(QString(itoa(ml.length, s, 10))));
    wid->setItem(wid->rowCount()-1, 3, new QTableWidgetItem(QString(itoa(ml.num_of_stations, s, 10))));
    wid->setItem(wid->rowCount()-1, 4, new QTableWidgetItem(QString(itoa(ml.open_year, s, 10))));
}


void OutputToGrid(QTableWidget *wid, QList <Metro_Line> Lines){
    for (Metro_Line ml:Lines) {
        OutputLineToGrid(wid, ml);
    }
}

void OutputAllLinesToGrid(QTableWidget *wid) {
    OutputToGrid(wid, TakeAllSortedLines());
}


int MaxStations() {
    QList <Metro_Line> Lines = TakeAllLines();
    QList <Metro_Line> ml;
    int ms = 0;
    for (Metro_Line ml:Lines) {
        if (ml.num_of_stations > ms) ms = ml.num_of_stations;
    }
    return ms;
}
