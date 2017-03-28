#ifndef TEACHERVIEWQUIZ_H
#define TEACHERVIEWQUIZ_H

#include <QMainWindow>

namespace Ui {
class teacherViewQuiz;
}

class teacherViewQuiz : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacherViewQuiz(QWidget *parent = 0);
    ~teacherViewQuiz();

private slots:
    void on_homeBtn_clicked();
    void on_viewquizBtn_clicked();
    void on_createquizBtn_clicked();
    void on_cherviewquiz_activated(const QModelIndex &index);
    void on_cherviewquiz_doubleClicked(const QModelIndex &index);

private:
    Ui::teacherViewQuiz *ui;
};

#endif // TEACHERVIEWQUIZ_H
