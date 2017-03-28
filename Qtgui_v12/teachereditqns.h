#ifndef TEACHEREDITQNS_H
#define TEACHEREDITQNS_H

#include <QMainWindow>

namespace Ui {
class teacherEditQns;
}

class teacherEditQns : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacherEditQns(QWidget *parent = 0);
    ~teacherEditQns();

private slots:
    void on_homeBtn_clicked();
    void on_viewquizBtn_clicked();
    void on_createquizBtn_clicked();
    void on_mcqBtn_clicked();
    void on_tfBtn_clicked();
    void on_saBtn_clicked();
    void on_editqn_createquizBtn_clicked();

private:
    Ui::teacherEditQns *ui;
};

#endif // TEACHEREDITQNS_H
