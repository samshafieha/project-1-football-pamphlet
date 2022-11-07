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

void team::setStaduim(QString stadium){
    this->stadium = stadium;
}
