#ifndef TEACHEREDITQUIZ_H
#define TEACHEREDITQUIZ_H

#include <QMainWindow>

namespace Ui {
class teacherEditQuiz;
}

class teacherEditQuiz : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacherEditQuiz(QWidget *parent = 0);
    ~teacherEditQuiz();

private slots:
    void on_homeBtn_clicked();
    void on_viewquizBtn_clicked();
    void on_createquizBtn_clicked();
    void on_viewquiz_deletequiz_clicked();
    void on_viewquiz_addnewqns_clicked();
    void on_chertableView_activated(const QModelIndex &index);
    void on_chertableView_doubleClicked(const QModelIndex &index);

private:
    Ui::teacherEditQuiz *ui;
};

#endif // TEACHEREDITQUIZ_H
