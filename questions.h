#include <sstream>
#include <vector>
#include <boost/algorithm/string/classification.hpp> // Include boost::for is_any_of
#include <boost/algorithm/string/split.hpp> // Include for boost::split
#include "header.h"
#pragma once
using namespace std;

class Questions {
protected:
	int question_id;
	string teacher_id;
	string subject;
	string question_text;
	int question_type; //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
	string data1; //SA - MCQ - T/F
	string data2; //MCQ - T/F
	string data3; //MCQ
	string data4; //MCQ
	string data5; //Store MCQ/TF Answer
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
	vector<Questions> getPracticeQuestions(int number);
	vector<Questions> getSelectQuestions(int number, string subjects);
	vector<string> getAllSubjects();
    vector<string> getAllQuestions();
	void cleanupQuestions(string subject);
	void deleteQuestion(string question_id, string quizN);
	void deleteQuestions(string quizN);
	void updateSubject(string subject1, string subject2);
  	void updateSubject(int id, string subject);
    int getLastQuestionID();
};
