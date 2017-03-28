#include "teachereditquiz.h"
#include "ui_teachereditquiz.h"
#include "teacherviewquiz.h"
#include "teachercreatequiz.h"

teacherEditQuiz::teacherEditQuiz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::teacherEditQuiz)
{
    ui->setupUi(this);
}

teacherEditQuiz::~teacherEditQuiz()
{
    delete ui;
}

void teacherEditQuiz::on_homeBtn_clicked()
{
	teacherViewQuiz *newteacherViewQuiz = new teacherViewQuiz;
	newteacherViewQuiz->show();
	hide();
}

void teacherEditQuiz::on_viewquizBtn_clicked()
{
	teacherViewQuiz *newteacherViewQuiz = new teacherViewQuiz;
	newteacherViewQuiz->show();
	hide();
}

void teacherEditQuiz::on_createquizBtn_clicked()
{
	teacherCreateQuiz *newteacherCreateQuiz = new teacherCreateQuiz;
	newteacherCreateQuiz->show();
	hide();
}

void teacherEditQuiz::on_viewquiz_deletequiz_clicked()
{

}

void teacherEditQuiz::on_viewquiz_addnewqns_clicked()
{

}

void teacherEditQuiz::on_chertableView_activated(const QModelIndex &index)
{

}

void teacherEditQuiz::on_chertableView_doubleClicked(const QModelIndex &index)
{

}
