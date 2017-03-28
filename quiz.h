#include <sstream>
#include <iostream>
#include <string>
#include "header.h"
#include "questions.h"
#pragma once
using namespace std;

class Quiz {
protected:
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
	void setUpdateQuizName(string subject, string mainQuizName);
	void cleanupQuiz();
	void deleteQuiz(string quiz_id, string mainQuizName);
};