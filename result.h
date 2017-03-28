#include <sstream>
#include <iostream>
#include <string>
#include "header.h"
#pragma once
using namespace std;

class Result {
protected:
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
