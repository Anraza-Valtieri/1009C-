#include "teacherviewquiz.h"
#include "ui_teacherviewquiz.h"
#include "teachercreatequiz.h"

teacherViewQuiz::teacherViewQuiz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::teacherViewQuiz)
{
    ui->setupUi(this);
}

teacherViewQuiz::~teacherViewQuiz()
{
    delete ui;
}

void teacherViewQuiz::on_homeBtn_clicked()
{
	teacherViewQuiz *newteacherViewQuiz = new teacherViewQuiz;
	newteacherViewQuiz->show();
	hide();
}

void teacherViewQuiz::on_viewquizBtn_clicked()
{
	teacherViewQuiz *newteacherViewQuiz = new teacherViewQuiz;
	newteacherViewQuiz->show();
	hide();
}

void teacherViewQuiz::on_createquizBtn_clicked()
{
	teacherCreateQuiz *newteacherCreateQuiz = new teacherCreateQuiz;
	newteacherCreateQuiz->show();
	hide();
}

void teacherViewQuiz::on_cherviewquiz_activated(const QModelIndex &index)
{

}

void teacherViewQuiz::on_cherviewquiz_doubleClicked(const QModelIndex &index)
{

}
