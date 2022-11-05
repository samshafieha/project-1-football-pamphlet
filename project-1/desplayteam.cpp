#include "desplayteam.h"
#include "ui_desplayteam.h"

desplayTeam::desplayTeam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::desplayTeam)
{
    ui->setupUi(this);
}

desplayTeam::~desplayTeam()
{
    delete ui;
}


void desplayTeam::on_pushButton_2_clicked() //display teams (unsorted)
{
    QFile file("C:/Users/samsh/Desktop/pdfs/Fall 2022/CS 1C/Qt Projects/project-1-football-pamphlet/project-1/NFL Information.csv");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString toQString = stream.readAll();
    ui->textBrowser->setText(toQString);
}
