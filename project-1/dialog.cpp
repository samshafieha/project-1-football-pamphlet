#include "dialog.h"
#include "ui_dialog.h"
#include "displayteam.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    desplayTeam desplayteam;
    desplayteam.setModal(true);
    desplayteam.exec();
}

