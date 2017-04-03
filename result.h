#include <sstream>
#include <vector>
#include "header.h"
#pragma once
using namespace std;

class Result {
protected:
	int resultID;
	int userID;
	string quizname;
	int markObtained;
	int totalMarks;
	string inputAnswer;
	string actualAnswer;
	string question;
	string indvmark;
	//  DbConection dc;

public:
	Result();
	Result(int userID, string quizname, int markObtained, int totalMarks, string inputAnswer, string actualAnswer, string question, string indvmark);
	int getResultID();
	void setResultID(int resultID);
	int getUserID();
	void setUserID(int userID);
	string getQuizname();
	void setQuizname(string quizname);
	int getMarkObtained();
	void setMarkObtained(int markObtained);
	int getTotalMarks();
	void setTotalMarks(int totalMarks);
	string getInputAnswer();
	void setInputAnswer(string inputAnswer);
	string getActualAnswer();
	void setActualAnswer(string actualAnswer);
	string getQuestion();
	void setQuestion(string question);
	string getIndvmark();
	void setIndvmark(string indvmark);
	void createResult();
	vector<Result> grabResultList(int aID);
	Result getSingleResult();
};
