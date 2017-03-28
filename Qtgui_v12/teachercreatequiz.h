#ifndef TEACHERCREATEQUIZ_H
#define TEACHERCREATEQUIZ_H

#include <QMainWindow>

namespace Ui {
class teacherCreateQuiz;
}

class teacherCreateQuiz : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacherCreateQuiz(QWidget *parent = 0);
    ~teacherCreateQuiz();

private slots:
    void on_homeBtn_clicked();
    void on_viewquizBtn_clicked();
    void on_createquizBtn_clicked();
    void on_createquiztitleBtn_clicked();
    void on_mcqBtn_clicked();
    void on_tfBtn_clicked();
    void on_saBtn_clicked();

private:
    Ui::teacherCreateQuiz *ui;
};

#endif // TEACHERCREATEQUIZ_H
