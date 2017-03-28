#ifndef STUDENTVIEWRESULT_H
#define STUDENTVIEWRESULT_H

#include <QMainWindow>

namespace Ui {
class studentViewResult;
}

class studentViewResult : public QMainWindow
{
    Q_OBJECT

public:
    explicit studentViewResult(QWidget *parent = 0);
    ~studentViewResult();

private slots:
    void on_homeBtn_clicked();
    void on_viewquizBtn_clicked();
    void on_createquizBtn_clicked();

private:
    Ui::studentViewResult *ui;
};

#endif // STUDENTVIEWRESULT_H
