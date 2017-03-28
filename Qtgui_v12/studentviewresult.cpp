#include "studentviewresult.h"
#include "ui_studentviewresult.h"
#include "studentviewquiz.h"

studentViewResult::studentViewResult(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studentViewResult)
{
    ui->setupUi(this);
}

studentViewResult::~studentViewResult()
{
    delete ui;
}

void studentViewResult::on_homeBtn_clicked()
{
	studentViewQuiz *newstudentViewQuiz = new studentViewQuiz;
	newstudentViewQuiz->show();
	hide();
}

void studentViewResult::on_viewquizBtn_clicked()
{
	studentViewQuiz *newstudentViewQuiz = new studentViewQuiz;
	newstudentViewQuiz->show();
	hide();
}

void studentViewResult::on_createquizBtn_clicked()
{
	studentViewResult *newstudentViewResult = new studentViewResult;
	newstudentViewResult->show();
	hide();
}
