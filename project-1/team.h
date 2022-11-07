#ifndef TEAM_H
#define TEAM_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <vector>

using namespace std;

class team
{
public:
    team();
    vector<team> getTeam();
    void setName(QString name);
    void setStaduim(QString stadium);
    QString getName();

private:
    QString name;
    QString stadium;
    int seatingCapacity;
    QString location;
    QString conference;
    QString division;
    QString surface;
    QString roof;
    QString openDate;

};

#endif // TEAM_H
