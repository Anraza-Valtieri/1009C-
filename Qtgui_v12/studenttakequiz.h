#ifndef STUDENTTAKEQUIZ_H
#define STUDENTTAKEQUIZ_H

#include <QMainWindow>

namespace Ui {
class studentTakeQuiz;
}

class studentTakeQuiz : public QMainWindow
{
    Q_OBJECT

public:
    explicit studentTakeQuiz(QWidget *parent = 0);
    ~studentTakeQuiz();

private slots:
    void on_homeBtn_clicked();
    void on_viewquizBtn_clicked();
    void on_viewresultBtn_clicked();

private:
    Ui::studentTakeQuiz *ui;
};

#endif // STUDENTTAKEQUIZ_H
