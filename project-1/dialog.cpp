#include "dialog.h"
#include "ui_dialog.h"
#include "desplayteam.h"
#include "helpdialog.h"
#include "contactdialog.h"
#include "login.h"

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


void Dialog::on_pushButton_2_clicked()
{
    HelpDialog helpdialog;
    helpdialog.setModal(true);
    helpdialog.exec();
}


void Dialog::on_pushButton_3_clicked()
{
    ContactDialog contactdialog;
    contactdialog.setModal(true);
    contactdialog.exec();
}


void Dialog::on_pushButton_4_clicked()
{
    Login logindialog;
    logindialog.setModal(true);
    logindialog.exec();
}

