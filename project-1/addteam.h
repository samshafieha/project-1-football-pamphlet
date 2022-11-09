#ifndef ADDTEAM_H
#define ADDTEAM_H

#include <QDialog>

namespace Ui {
class addteam;
}

class addteam : public QDialog
{
    Q_OBJECT

public:
    explicit addteam(QWidget *parent = nullptr);
    ~addteam();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addteam *ui;
};

#endif // ADDTEAM_H
