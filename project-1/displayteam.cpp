#include "desplayteam.h"
#include "ui_desplayteam.h"
#include <string>
#include <fstream>
using namespace std;

desplayTeam::desplayTeam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::desplayTeam)
{
    ui->setupUi(this);
    ifstream fin;

    fin.open("NFL Information.csv");
    string name;
    fin.ignore(1000, '\n');
    getline(fin, name, ',');
    americanTeam.push_back(new team(name));
    fin.close();
}

desplayTeam::~desplayTeam()
{
    delete ui;
}


void desplayTeam::on_pushButton_2_clicked() //display teams (unsorted)
{
    string name;
        ifstream fin;
        fin.open("NFL Information.csv");
        fin.ignore(1000, '\n');
        getline (fin, name, ',');
   QString toQString = QString::fromStdString(name);
    ui->textBrowser->setText(toQString);
    fin.close();
}
