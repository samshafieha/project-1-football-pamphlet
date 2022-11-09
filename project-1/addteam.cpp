#include "addteam.h"
#include "ui_addteam.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

addteam::addteam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addteam)
{
    ui->setupUi(this);
}

addteam::~addteam()
{
    delete ui;
}

void addteam::on_pushButton_clicked()
{
    QString teamName = ui->lineEdit_TeamName->text();
    QString stadiumName = ui->lineEdit_StadiumName->text();
    QString seatingCap = ui->lineEdit_SeatingCap->text();
    QString location = ui->lineEdit_Location->text();
    QString conference = ui->lineEdit_Conference->text();
    QString division = ui->lineEdit_Division->text();
    QString surfaceType = ui->lineEdit_SurfaceType->text();
    QString roofType = ui->lineEdit_RoofType->text();
    QString dateOpened = ui->lineEdit_DateOpened->text();

       QFile textUpdate("C:/Users/samsh/Desktop/pdfs/Fall 2022/CS 1C/Qt Projects/project-1-football-pamphlet/project-1/NFL Information.csv");
       if (textUpdate.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
       {
           QTextStream out(&textUpdate);
           out << teamName << "    " << stadiumName << "    " << seatingCap << "    " << location
               << "    " << conference << "    " << division << "    " << surfaceType << "    " << roofType
               << "    " << dateOpened << endl;
           textUpdate.flush();
           textUpdate.close();
       }
       this->close();
}

