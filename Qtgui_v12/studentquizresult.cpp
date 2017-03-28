#include "studentquizresult.h"
#include "studentviewquiz.h"
#include "studentviewresult.h"
#include "ui_studentquizresult.h"
using namespace std;

QString testvar = "haha";

studentQuizResult::studentQuizResult(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studentQuizResult)
{
    ui->setupUi(this);
	// set variable to label
	ui->studentresult_Label->setText(testvar);
}

studentQuizResult::~studentQuizResult()
{
    delete ui;
}

void studentQuizResult::on_homeBtn_clicked()
{
	studentViewQuiz *newstudentViewQuiz = new studentViewQuiz;
	newstudentViewQuiz->show();
	hide();
}

void studentQuizResult::on_viewquizBtn_clicked()
{
	studentViewQuiz *newstudentViewQuiz = new studentViewQuiz;
	newstudentViewQuiz->show();
	hide();
}

void studentQuizResult::on_viewresultBtn_clicked()
{
	studentViewResult *newstudentViewResult = new studentViewResult;
	newstudentViewResult->show();
	hide();
}
