#ifndef DISPLAYTEAM_H
#define DISPLAYTEAM_H

#include <QDialog>
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

private:
    Ui::desplayTeam *ui;
    vector <team*>americanTeam;
    vector <team*>nationalTeam;
};

#endif // DISPLAYTEAM_H
