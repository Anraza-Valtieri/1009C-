#include "studentviewquiz.h"
#include "ui_studentviewquiz.h"
#include "studentviewresult.h"

studentViewQuiz::studentViewQuiz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studentViewQuiz)
{
    ui->setupUi(this);
}

studentViewQuiz::~studentViewQuiz()
{
    delete ui;
}

void studentViewQuiz::on_homeBtn_clicked()
{
	studentViewQuiz *newstudentViewQuiz = new studentViewQuiz;
	newstudentViewQuiz->show();
	hide();
}

void studentViewQuiz::on_viewquizBtn_clicked()
{
	studentViewQuiz *newstudentViewQuiz = new studentViewQuiz;
	newstudentViewQuiz->show();
	hide();
}

void studentViewQuiz::on_viewresultBtn_clicked()
{
	studentViewResult *newstudentViewResult = new studentViewResult;
	newstudentViewResult->show();
	hide();
}
