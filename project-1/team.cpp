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
QString team::getStaduim(){
    return stadium;
}
void team::setStaduim(QString stadium){
    this->stadium = stadium;
}
int team::getSeating(){
    return seatingCapacity;
}
void team::setSeating(int seatingCapacity){
    this->seatingCapacity = seatingCapacity;
}
QString team::getLocation(){
    return location;
}
void team::setLocation(QString location){
    this->location = location;
}
QString team::getConference(){
    return conference;
}
void team::setConference(QString conference){
    this->conference = conference;
}
QString team::getDivision(){
    return division;
}
void team::setDivision(QString division){
    this->division = division;
}
QString team::getSurface(){
    return surface;
}
void team::setSurface(QString surface){
    this->surface = surface;
}
QString team::getRoof(){
    return roof;
}
void team::setRoof(QString roof){
    this->roof = roof;
}
QString team::getOpenDate(){
    return openDate;
}
void team::setOpenDate(QString openDate){
    this->openDate = openDate;
}
