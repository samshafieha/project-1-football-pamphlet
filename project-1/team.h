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
    QString getName();
    void setName(QString name);
    QString getStaduim();
    void setStaduim(QString stadium);
    QString getSeating();
    int setSeating(int seatingCapacity);
    QString getLocation();
    void setLocation(QString location);
    QString getConference();
    void setConference(QString conference);
    QString getDivision();
    void setDivision(QString division);
    QString getSurface();
    void setSurface(QString surface);
    QString getRoof();
    void setRoof(QString roof);
    QString getOpenDate();
    void setOpenDate(QString openDate);

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
