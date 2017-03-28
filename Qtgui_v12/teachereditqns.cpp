#include "teachereditqns.h"
#include "ui_teachereditqns.h"
#include "teacherviewquiz.h"
#include "teachercreatequiz.h"

teacherEditQns::teacherEditQns(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::teacherEditQns)
{
    ui->setupUi(this);
	ui->mcqWidget->setHidden(true);
	ui->tfWidget->setHidden(true);
	ui->saWidget->setHidden(true);
}

teacherEditQns::~teacherEditQns()
{
    delete ui;
}

void teacherEditQns::on_homeBtn_clicked()
{
	teacherViewQuiz *newteacherViewQuiz = new teacherViewQuiz;
	newteacherViewQuiz->show();
	hide();
}

void teacherEditQns::on_viewquizBtn_clicked()
{
	teacherViewQuiz *newteacherViewQuiz = new teacherViewQuiz;
	newteacherViewQuiz->show();
	hide();
}

void teacherEditQns::on_createquizBtn_clicked()
{
	teacherCreateQuiz *newteacherCreateQuiz = new teacherCreateQuiz;
	newteacherCreateQuiz->show();
	hide();
}

void teacherEditQns::on_mcqBtn_clicked()
{
	ui->mcqWidget->setHidden(false);
	ui->tfWidget->setHidden(true);
	ui->saWidget->setHidden(true);
}

void teacherEditQns::on_tfBtn_clicked()
{
	ui->mcqWidget->setHidden(true);
	ui->tfWidget->setHidden(false);
	ui->saWidget->setHidden(true);
}

void teacherEditQns::on_saBtn_clicked()
{
	ui->mcqWidget->setHidden(true);
	ui->tfWidget->setHidden(true);
	ui->saWidget->setHidden(false);
}

void teacherEditQns::on_editqn_createquizBtn_clicked()
{

}
