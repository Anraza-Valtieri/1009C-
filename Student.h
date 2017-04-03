#include "header.h"
#include "questions.h"
#include "result.h"
#pragma once
using namespace std;
#ifndef C_STUDENT_H
#define C_STUDENT_H

class Student{
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
  Result tryQuestion(Questions q, int qnNo, Result r);
  void showAnswers(vector<Questions> aq, Result r);
  void doTheResultThingy(Result r);
};

#endif