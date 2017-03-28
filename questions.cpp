#include <sstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Questions {
private:
	int question_id;
	string teacher_id;
	string subject;
	string question_text;
	int question_type; //MCQ - 0 | T/F - 1 | SA - 2
	string data1; //SA - MCQ - T/F
	string data2; //MCQ - T/F
	string data3; //MCQ
	string data4; //MCQ
	string data5; //Store MCQ choice
	double marks;
//  DbConnection dc;

public:
	Questions();
	Questions(string teacher_id, string subject, string questions_text, int question_type, string data1, string data2, string data3, string data4, string data5, double marks);
	int getQuestion_id();
	void setQuestion_id(int question_id);
	string getTeacher_id();
	void setTeacher_id(string teacher_id);
	string getSubject();
	void setSubject(string subject);
	string getQuestion_text();
	void setQuestion_text(string question_text);
	int getQuestion_type();
	void setQuestion_type(int question_type);
	string getData1();
	void setData1(string data1);
	string getData2();
	void setData2(string data2);
	string getData3();
	void setData3(string data3);
	string getData4();
	void setData4(string data4);
	string getData5();
	void setData5(string data5);
	double getMarks();
	void setMarks(double marks);
	void createQuestion();
	void updateQuestion();
	vector<Questions> getQuestionsData(string question_id);
	vector<Questions> getQuestionsDataBySubject(string subject);
	vector<Questions> getPracticeQuestions();
	void cleanupQuestions(string subject);
	void deleteQuestion(string question_id, string quizN);
	void deleteQuestions(string quizN);
	void updateSubject(string subject1, string subject2);
};

Questions::Questions() {
	cout << "lol";
}

Questions::Questions(string teacher_id, string subject, string question_text, int question_type, string data1, string data2, string data3, string data4, string data5, double marks) {
	this->teacher_id = teacher_id;
	this->subject = subject;
	this->question_text = question_text;
	this->question_type = question_type;
	this->data1 = data1;
	this->data2 = data2;
	this->data3 = data3;
	this->data4 = data4;
	this->data5 = data5;
	this->marks = marks;
}

int Questions::getQuestion_id() {
	return question_id;
}

void Questions::setQuestion_id(int question_id) {
	this->question_id = question_id;
}

string Questions::getTeacher_id() {
	return teacher_id;
}

void Questions::setTeacher_id(string teacher_id) {
	this->teacher_id = teacher_id;
}

string Questions::getSubject() {
	return subject;
}

void Questions::setSubject(string subject) {
	this->subject = subject;
}

string Questions::getQuestion_text() {
	return question_text;
}

void Questions::setQuestion_text(string question_text) {
	this->question_text = question_text;
}

int Questions::getQuestion_type() {
	return question_type;
}

void Questions::setQuestion_type(int question_type) {
	this->question_type = question_type;
}

string Questions::getData1() {
	return data1;
}

void Questions::setData1(string data1) {
	this->data1 = data1;
}

string Questions::getData2() {
	return data2;
}

void Questions::setData2(string data2) {
	this->data2 = data2;
}

string Questions::getData3() {
	return data3;
}

void Questions::setData3(string data3) {
	this->data3 = data3;
}

string Questions::getData4() {
	return data4;
}

void Questions::setData4(string data4) {
	this->data4 = data4;
}

string Questions::getData5() {
	return data5;
}

void Questions::setData5(string data5) {
	this->data5 = data5;
}

double Questions::getMarks() {
	return marks;
}

void Questions::setMarks(double marks) {
	this->marks = marks;
}

void Questions::createQuestion() {
	//Db.
}

void Questions::updateQuestion() {
	//DB.
}

vector<Questions> Questions::getQuestionsData(string question_id) {
	//db
}

vector<Questions> Questions::getQuestionsDataBySubject(string subject) {
	//db!
}

vector<Questions> Questions::getPracticeQuestions() {
	//db!!!
}

void Questions::cleanupQuestions(string subject) {
	//dbbdbdbdbdbd
}

void Questions::deleteQuestion(string questions_id, string quizN) {
	//dbdbdbdbdbdbdbddbdb
}

void Questions::deleteQuestions(string quizN) {
	//dbdbdbdbdbdb
}

void Questions::updateSubject(string subject1, string subject2) {
	//bdbddbdbdbdbddb
}

