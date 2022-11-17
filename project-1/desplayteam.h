#ifndef DESPLAYTEAM_H
#define DESPLAYTEAM_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include "team.h"

namespace Ui {
class desplayTeam;
}

class desplayTeam : public QDialog
{
    Q_OBJECT

public:
    explicit desplayTeam(QWidget *parent = nullptr);
    ~desplayTeam();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

    void displayInfo();

    void on_addButton_clicked();

private:
    Ui::desplayTeam *ui;
    int size;
    team *teams;
    int totalCapacity;
};

#endif // DESPLAYTEAM_H
