#include <sstream>
#include <iostream>
#include <string>
using namespace std;

class Quiz {
private:
	int quiz_id;
	string quizname;
	string questionids;
	string subject;
//  DbConnection dc;

public:
	Quiz();
	Quiz(string quizname, string questionids, string subject);
	int getQuiz_id();
	void setQuiz_id(int quiz_id);
	string getQuizname();
	void setQuizname(string quizname);
	string getQuestionids();
	void setQuestionids(string questionids);
	string getSubject();
	void setSubject(string subject);
	void getQuizDBName();
	string getQuestions(string subject);
	void createquiz();
	bool checkExist(string subject);
	void setUpdateQuizName(string subject);
	void cleanupQuiz();
	void deleteQuiz(string quiz_id);
};

Quiz::Quiz() {
	quiz_id = -1;
}

Quiz::Quiz(string quizname, string questionids, string subject) {
	this->quizname = quizname;
	this->questionids = questionids;
	this->subject = subject;
}

int Quiz::getQuiz_id() {
	return quiz_id;
}

void Quiz::setQuiz_id(int quiz_id) {
	this->quiz_id = quiz_id;
}

string Quiz::getQuizname() {
	return quizname;
}

void Quiz::setQuizname(string quizname) {
	this->quizname = quizname;
}

string Quiz::getQuestionids() {
	return questionids;
}

void Quiz::setQuestionids(string questionids) {
	this->questionids = questionids;
}

string Quiz::getSubject() {
	return subject;
}

void Quiz::setSubject(string subject) {
	this->subject = subject;
}

void Quiz::getQuizDBName() {
	//??? DB?!?!?!
}

string Quiz::getQuestions(string subject) {
	//???!?!? DB?!?!?!?!?
}

void Quiz::createquiz() {
	//??!? DB?!?!
}

bool Quiz::checkExist(string subject) {
	//!!?!?? DB?!?
}

void Quiz::setUpdateQuizName(string subject) {
	//??!@?!?!?!?@?#
}

void Quiz::cleanupQuiz() {
	//?!@??@!?@!?@!?!$?@#$%$#@!@#$%^&*
}

void Quiz::deleteQuiz(string quiz_id) {
	//?@?!@#?@?#$%^&^%$#@
}