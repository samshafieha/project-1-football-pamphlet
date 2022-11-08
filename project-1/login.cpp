#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if(username == "Admin" && password == "1234")
    {
        QMessageBox::information(this, "Login", "Logged in");
        hide();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Username or Password is Incorrect");
    }
}
