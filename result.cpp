#include <sstream>
#include <iostream>
#include <string>
using namespace std;

class Result {
private:
	int resultID;
	int userID;
	string quizname;
	string markObtained;
	string totalMarks;
	string inputAnswer;
	string actualAnswer;
	string question;
	string indvmark;
//  DbConection dc;

public:
	Result();
	Result(int userID, string quizname, string markObtained, string totalMarks, string inputAnswer, string actualAnswer, string question, string indvmark);
	int getResultID();
	void setResultID(int resultID);
	int getUserID();
	void setUserID(int userID);
	string getQuizname();
	void setQuizname(string quizname);
	string getMarkObtained();
	void setMarkObtained(string markObtained);
	string getTotalMarks();
	void setTotalMarks(string totalMarks);
	string getInputAnswer();
	void setInputAnswer(string inputAnswer);
	string getActualAnswer();
	void setActualAnswer(string actualAnswer);
	string getQuestion();
	void setQuestion(string question);
	string getIndvmark();
	void setIndvmark(string indvmark);
	void createResult();
	Result getSingleResult();
};

Result::Result(){
	cout << "lol";
}

Result::Result(int userID, string quizname, string markObtained, string totalMarks, string inputAnswer, string actualAnswer, string question, string indvmark) {
	this->userID = userID;
	this->quizname = quizname;
	this->markObtained = markObtained;
	this->totalMarks = totalMarks;
	this->inputAnswer = inputAnswer;
	this->question = question;
	this->indvmark = indvmark;
}

int Result::getResultID() {
	return resultID;
}

void Result::setResultID(int resultID) {
	this->resultID = resultID;
}

int Result::getUserID() {
	return userID;
}

void Result::setUserID(int userID) {
	this->userID = userID;
}

string Result::getQuizname() {
	return quizname;
}

void Result::setQuizname(string quizname) {
	this->quizname = quizname;
}

string Result::getMarkObtained() {
	return markObtained;
}

void Result::setMarkObtained(string markObtained) {
	this->markObtained = markObtained;
}

string Result::getTotalMarks() {
	return totalMarks;
}

void Result::setTotalMarks(string totalMarks) {
	this->totalMarks = totalMarks;
}

string Result::getInputAnswer() {
	return inputAnswer;
}

void Result::setInputAnswer(string inputAnswer) {
	this->inputAnswer = inputAnswer;
}

string Result::getActualAnswer() {
	return actualAnswer;
}

void Result::setActualAnswer(string actualAnswer) {
	this->actualAnswer = actualAnswer;
}

string Result::getQuestion() {
	return question;
}

void Result::setQuestion(string question) {
	this->question = question;
}

string Result::getIndvmark() {
	return indvmark;
}

void Result::setIndvmark(string indvmark) {
	this->indvmark = indvmark;
}

void Result::createResult() {
	//gotta wait for db
}

Result Result::getSingleResult() {
	//GOTTA WAIT FO' DEM' DB
}