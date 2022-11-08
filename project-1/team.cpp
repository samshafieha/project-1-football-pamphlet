#include "team.h"

team::team()
{

}
QString team::getName(){
    return name;
}
void team::setName(QString name){
    this->name = name;
}
QString getStaduim(){
    return stadium;
}
void team::setStaduim(QString stadium){
    this->stadium = stadium;
}
QString getSeating(){
    return seatingCapacity;
}
int setSeating(int seatingCapacity){
    this->seatingCapacity = seatingCapacity;
}
QString getLocation(){
    return location;
}
void setLocation(QString location){
    this->location = location;
}
QString getConference(){
    return conference;
}
void setConference(QString conference){
    this->conference = conference;
}
QString getDivision(){
    return division;
}
void setDivision(QString division){
    this->division = division;
}
QString getSurface(){
    return surface;
}
void setSurface(QString surface){
    this->surface = surface;
}
QString getRoof(){
    return roof;
}
void setRoof(QString roof){
    this->roof = roof;
}
QString getOpenDate(){
    return openDate;
}
void setOpenDate(QString openDate){
    this->openDate = openDate;
}
