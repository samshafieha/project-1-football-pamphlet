#include "desplayteam.h"
#include "ui_desplayteam.h"

desplayTeam::desplayTeam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::desplayTeam)
{
    ui->setupUi(this);
    size = 35;
    teams = new team[size];
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

    QStringList wordList;
    QTextStream inFile(&file);
    int row = 0;
    QString readLine = inFile.readLine();
    QStringList listValue = readLine.split(',');
    ui->tableWidget->setColumnCount(listValue.size());
    ui->tableWidget->setHorizontalHeaderLabels(listValue);

    int teamIndex = 0;
    while (!inFile.atEnd()){
        QString readLine = inFile.readLine();
        QStringList listValue = readLine.split(',');

        row++;
        ui->tableWidget->setRowCount(row);
        for (int col = 0; col < listValue.size(); col++){
            ui->tableWidget->setItem(row-1, col, new QTableWidgetItem(listValue[col]));
            if (col == 0){teams[teamIndex].setName(listValue[col]);}
            else if (col == 1){teams[teamIndex].setStaduim(listValue[col]);}
        }
        teamIndex++;
    }
    file.flush();
    file.close();
}

void desplayTeam::on_pushButton_clicked()
{
    QString temp;

    for (int i = 0; i < size; i++){
        if ((i+1) == size){break;}
        if (teams[i].getName() > teams[i+1].getName()){
            temp = teams[i+1].getName();
            teams[i+1].getName() = teams[i].getName();
            teams[i].getName() = temp;
        }
    }

    for (int row = 0; row < ui->tableWidget->rowCount(); row++){
        for (int col = 0; col < ui->tableWidget->columnCount(); col++){
            //TO BE IMPLEMENTED...
        }
    }
}

