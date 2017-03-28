#include "index.h"
#include "studentQuizResult.h"
#include "studenttakequiz.h"
#include "teachercreatequiz.h"
#include "teachereditqns.h"
#include "teachereditquiz.h"
#include "teacherviewquiz.h"

index::index(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::index)
{
    ui->setupUi(this);
}

void index::on_loginBtn_clicked()
{
	studentQuizResult *newstudentQuizResult = new studentQuizResult;
	newstudentQuizResult->show();
	hide();

	// if student login, show this
	//studentViewQuiz *newstudentViewQuiz = new studentViewQuiz;
	//newstudentViewQuiz->show();
	//hide();

	// if teacher login, show this
	//teacherViewQuiz *newteacherViewQuiz = new teacherViewQuiz;
	//newteacherViewQuiz->show();
	//hide();
}

index::~index()
{
    delete ui;
}


