#include "WorkWithData.h"
#include "WorkWithData.cpp"
#include "Del.h"


using namespace std;


bool DeleteMetro_Line(int id, QString name) {
    bool deleted = false;
    string n = name.toStdString();
    QList <Metro_Line> Lines = TakeAllLines();
    ofstream OutF;
    string BufPath = "metro_lines.bmp";
    ofstream OutF1;
    OutF.open(BufPath);
    for (Metro_Line ml:Lines) {
        if (ml.name != n || ml.id != id) {
            OutF << ml;
        }
        else deleted = true;
    }
    OutF.close();
    remove("metro_lines.txt");
    rename("metro_lines.bmp", "metro_lines.txt");
    return deleted;
}
