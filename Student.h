#include "header.h"
#include "Account.h"
#include "questions.h"
#pragma once
using namespace std;
#ifndef C_STUDENT_H
#define C_STUDENT_H

class Student : protected Account{
private:
	int aID;
	string name;
	string uniqID;
	string email;

public:
	Student();
	Student(int aID, const string &name, const string &uniqID, const string &email);
	int getAID() const;
	void setAID(int aID);
	const string &getName() const;
	void setName(const string &name);
	const string &getUniqID() const;
	void setUniqID(const string &uniqID);
	const string &getEmail() const;
	void setEmail(const string &email);
	void attemptQuestions();
	void tryQuestion(Questions q, int qnNo);
	void showAnswers(vector<string>);
};

#endif