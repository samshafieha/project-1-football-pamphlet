#ifndef DESPLAYTEAM_H
#define DESPLAYTEAM_H

#include <QDialog>

namespace Ui {
class desplayTeam;
}

class desplayTeam : public QDialog
{
    Q_OBJECT

public:
    explicit desplayTeam(QWidget *parent = nullptr);
    ~desplayTeam();

private:
    Ui::desplayTeam *ui;
};

#endif // DESPLAYTEAM_H
