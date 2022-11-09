#include "desplayteam.h"
#include "ui_desplayteam.h"

desplayTeam::desplayTeam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::desplayTeam)
{
    ui->setupUi(this);
    size = 33;
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
            else if (col == 2){teams[teamIndex].setSeating(listValue[col].toInt());}
            else if (col == 3){teams[teamIndex].setLocation(listValue[col]);}
            else if (col == 4){teams[teamIndex].setConference(listValue[col]);}
            else if (col == 5){teams[teamIndex].setDivision(listValue[col]);}
            else if (col == 6){teams[teamIndex].setSurface(listValue[col]);}
            else if (col == 7){teams[teamIndex].setRoof(listValue[col]);}
            else if (col == 8){teams[teamIndex].setOpenDate(listValue[col]);}
        }
        teamIndex++;
    }
    file.flush();
    file.close();
}

void desplayTeam::on_pushButton_clicked() //sort by team name
{
    team temp;
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if(teams[i].getName()>teams[j].getName()){
                temp = teams[i];
                teams[i] = teams[j];
                teams[j] = temp;
            }
        }
    }

    displayInfo();

}

void desplayTeam::displayInfo(){
    for (int row = 0; row < ui->tableWidget->rowCount(); row++){
        for (int col = 0; col < ui->tableWidget->columnCount(); col++){
            if (col == 0){ui->tableWidget->setItem(row, col, new QTableWidgetItem(teams[row].getName()));}
            else if (col == 1){ui->tableWidget->setItem(row, col, new QTableWidgetItem(teams[row].getStaduim()));}
            else if (col == 2){ui->tableWidget->setItem(row, col, new QTableWidgetItem(QString::number(teams[row].getSeating())));}
            else if (col == 3){ui->tableWidget->setItem(row, col, new QTableWidgetItem(teams[row].getLocation()));}
            else if (col == 4){ui->tableWidget->setItem(row, col, new QTableWidgetItem(teams[row].getConference()));}
            else if (col == 5){ui->tableWidget->setItem(row, col, new QTableWidgetItem(teams[row].getDivision()));}
            else if (col == 6){ui->tableWidget->setItem(row, col, new QTableWidgetItem(teams[row].getSurface()));}
            else if (col == 7){ui->tableWidget->setItem(row, col, new QTableWidgetItem(teams[row].getRoof()));}
            else if (col == 8){ui->tableWidget->setItem(row, col, new QTableWidgetItem(teams[row].getOpenDate()));}
        }
    }
}

void desplayTeam::on_pushButton_3_clicked() //sort by stadium name
{
    team temp;

    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if(teams[i].getStaduim() > teams[j].getStaduim()){
                temp = teams[i];
                teams[i] = teams[j];
                teams[j] = temp;
            }
        }
    }

    displayInfo();
}


void desplayTeam::on_pushButton_4_clicked()
{
    team temp;

    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if(teams[i].getLocation() > teams[j].getLocation()){
                temp = teams[i];
                teams[i] = teams[j];
                teams[j] = temp;
            }
        }
    }

    displayInfo();
}


void desplayTeam::on_pushButton_5_clicked()
{
    team temp;

    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if(teams[i].getSeating() > teams[j].getSeating()){
                temp = teams[i];
                teams[i] = teams[j];
                teams[j] = temp;
            }
        }
    }

    displayInfo();
}

