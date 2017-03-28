#include "teachercreatequiz.h"
#include "ui_teachercreatequiz.h"
#include "teacherviewquiz.h"

teacherCreateQuiz::teacherCreateQuiz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::teacherCreateQuiz)
{
    ui->setupUi(this);
	ui->mcqWidget->setHidden(true);
	ui->tfWidget->setHidden(true);
	ui->saWidget->setHidden(true);

}

teacherCreateQuiz::~teacherCreateQuiz()
{
    delete ui;
}

void teacherCreateQuiz::on_homeBtn_clicked()
{
	teacherViewQuiz *newteacherViewQuiz = new teacherViewQuiz;
	newteacherViewQuiz->show();
	hide();
}

void teacherCreateQuiz::on_viewquizBtn_clicked()
{
	teacherViewQuiz *newteacherViewQuiz = new teacherViewQuiz;
	newteacherViewQuiz->show();
	hide();
}

void teacherCreateQuiz::on_createquizBtn_clicked()
{
	teacherCreateQuiz *newteacherCreateQuiz = new teacherCreateQuiz;
	newteacherCreateQuiz->show();
	hide();
}

void teacherCreateQuiz::on_createquiztitleBtn_clicked()
{

}

void teacherCreateQuiz::on_mcqBtn_clicked()
{
	ui->mcqWidget->setHidden(false);
	ui->tfWidget->setHidden(true);
	ui->saWidget->setHidden(true);
}

void teacherCreateQuiz::on_tfBtn_clicked()
{
	ui->mcqWidget->setHidden(true);
	ui->tfWidget->setHidden(false);
	ui->saWidget->setHidden(true);
}

void teacherCreateQuiz::on_saBtn_clicked()
{
	ui->mcqWidget->setHidden(true);
	ui->tfWidget->setHidden(true);
	ui->saWidget->setHidden(false);
}
