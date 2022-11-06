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
    QString path = "C:/Users/samsh/Desktop/pdfs/Fall 2022/CS 1C/Qt Projects/project-1-football-pamphlet/project-1/NFL Information.csv";
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    QStringList hlabels;

    QStringList wordList;
    QTextStream inFile(&file);
    int row = 0;
    QString readLine = inFile.readLine();
    QStringList listValue = readLine.split(',');
    ui->tableWidget->setColumnCount(listValue.size());
    ui->tableWidget->setHorizontalHeaderLabels(listValue);

    while (!inFile.atEnd()){
        QString readLine = inFile.readLine();
        QStringList listValue = readLine.split(',');

        row++;
        ui->tableWidget->setRowCount(row);
        for (int k = 0; k < listValue.size(); k++){
            ui->tableWidget->setItem(row-1, k, new QTableWidgetItem(listValue[k]));
        }
    }

}
