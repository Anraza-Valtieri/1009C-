#ifndef STUDENTQUIZRESULT_H
#define STUDENTQUIZRESULT_H

#include <QMainWindow>

namespace Ui {
class studentQuizResult;
}

class studentQuizResult : public QMainWindow
{
    Q_OBJECT

public:
    explicit studentQuizResult(QWidget *parent = 0);
    ~studentQuizResult();

private slots:
    void on_homeBtn_clicked();
    void on_viewquizBtn_clicked();
    void on_viewresultBtn_clicked();

private:
    Ui::studentQuizResult *ui;
};

#endif // STUDENTQUIZRESULT_H
