#ifndef STUDENTVIEWQUIZ_H
#define STUDENTVIEWQUIZ_H

#include <QMainWindow>

namespace Ui {
class studentViewQuiz;
}

class studentViewQuiz : public QMainWindow
{
    Q_OBJECT

public:
    explicit studentViewQuiz(QWidget *parent = 0);
    ~studentViewQuiz();

private slots:
    void on_homeBtn_clicked();
    void on_viewquizBtn_clicked();
    void on_viewresultBtn_clicked();

private:
    Ui::studentViewQuiz *ui;
};

#endif // STUDENTVIEWQUIZ_H
