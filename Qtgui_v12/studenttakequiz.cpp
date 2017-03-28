#include "studenttakequiz.h"
#include "ui_studenttakequiz.h"
#include "studentviewquiz.h"
#include "studentviewresult.h"

studentTakeQuiz::studentTakeQuiz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studentTakeQuiz)
{
    ui->setupUi(this);
}

studentTakeQuiz::~studentTakeQuiz()
{
    delete ui;
}

void studentTakeQuiz::on_homeBtn_clicked()
{
	studentViewQuiz *newstudentViewQuiz = new studentViewQuiz;
	newstudentViewQuiz->show();
	hide();
}
void studentTakeQuiz::on_viewquizBtn_clicked()
{
	studentViewQuiz *newstudentViewQuiz = new studentViewQuiz;
	newstudentViewQuiz->show();
	hide();
}
void studentTakeQuiz::on_viewresultBtn_clicked()
{
	studentViewResult *newstudentViewResult = new studentViewResult;
	newstudentViewResult->show();
	hide();
}
