#ifndef TEAM_H
#define TEAM_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <string>

using namespace std;

class team
{
public:
    team();


private:
    string name;
    string stadium;
    int seatingCapacity;
    string location;
    string conference;
    string division;
    string surface;
    string roof;
    string openDate;

};

#endif // TEAM_H
