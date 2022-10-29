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
