#include "questions.h"
#include "header.h"
#include <boost/algorithm/string/case_conv.hpp> // Include for boost::tolower
#pragma once

Questions::Questions() {
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
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		int res;
		string SQL = "INSERT INTO quiz_questions (teacher_id, subject, question_text, question_type, data1, data2, data3, data4, data5, marks) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";
		prep_stmt = DBcon->prepareStatement(SQL);
		//prep_stmt->setInt(1, question_id);
		prep_stmt->setString(1, teacher_id);
		prep_stmt->setString(2, subject);
		prep_stmt->setString(3, question_text);
		prep_stmt->setInt(4, question_type);
		prep_stmt->setString(5, data1);
		prep_stmt->setString(6, data2);
		prep_stmt->setString(7, data3);
		prep_stmt->setString(8, data4);
		prep_stmt->setString(9, data5);
		prep_stmt->setDouble(10, marks);
		res = prep_stmt->executeUpdate();
		if (res > 0) {
			cout << "Question Created!" << endl;
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return;
}

void Questions::updateQuestion() {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		int res;
		string SQL = "UPDATE quiz_questions set teacher_id = ?, subject = ?, question_text = ?, question_type = ?, data1 = ?, data2 = ?, data3 = ?, data4 = ?, data5 = ?, marks = ? where (subject = ? and question_id = ?)";
		prep_stmt = DBcon->prepareStatement(SQL);
		//prep_stmt->setInt(1, question_id);
		prep_stmt->setString(1, teacher_id);
		prep_stmt->setString(2, subject);
		prep_stmt->setString(3, question_text);
		prep_stmt->setInt(4, question_type);
		prep_stmt->setString(5, data1);
		prep_stmt->setString(6, data2);
		prep_stmt->setString(7, data3);
		prep_stmt->setString(8, data4);
		prep_stmt->setString(9, data5);
		prep_stmt->setDouble(10, marks);
		prep_stmt->setString(11, subject);
		prep_stmt->setInt(12, question_id);
		res = prep_stmt->executeUpdate();
		if (res > 0) {
			cout << "Question update!" << endl;
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return;
}

vector<Questions> Questions::getQuestionsData(string question_id) {
	vector<string> id;
	boost::split(id, question_id, boost::is_any_of(","), boost::token_compress_on);
	vector<Questions> aq;
	aq.reserve(20);

	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		for (int i = 0; i < id.size(); i++) {
			string SQL = "SELECT * FROM quiz_questions WHERE question_id = ?";
			prep_stmt = DBcon->prepareStatement(SQL);
			prep_stmt->setString(1, id[i]);
			res = prep_stmt->executeQuery();

			if (res->next()) {
				Questions q;
				q.setQuestion_text(res->getString("question_text"));
				q.setSubject(res->getString("subject"));
				q.setQuestion_type(res->getInt("question_type"));
				q.setData1(res->getString("data1"));
				q.setData2(res->getString("data2"));
				q.setData3(res->getString("data3"));
				q.setData4(res->getString("data4"));
				q.setData5(res->getString("data5"));
				q.setMarks(res->getDouble("marks"));

				aq.push_back(q);
			}
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return aq;
}

vector<Questions> Questions::getQuestionsDataBySubject(string subject) {
	vector<Questions> aq;
	aq.reserve(20);

	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		string SQL = "SELECT * FROM quiz_questions WHERE subject = ?";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setString(1, subject);
		res = prep_stmt->executeQuery();

		while (res->next()) {
			Questions q;
			q.setQuestion_text(res->getString("question_text"));
			q.setSubject(res->getString("subject"));
			q.setQuestion_type(res->getInt("question_type"));
			q.setData1(res->getString("data1"));
			q.setData2(res->getString("data2"));
			q.setData3(res->getString("data3"));
			q.setData4(res->getString("data4"));
			q.setData5(res->getString("data5"));
			q.setMarks(res->getDouble("marks"));

			aq.push_back(q);
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return aq;
}

vector<Questions> Questions::getPracticeQuestions(int number) {
	vector<Questions> aq;
	aq.reserve(20);

	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		string SQL = "SELECT * FROM quiz_questions ORDER BY RAND() LIMIT ?";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setInt(1, number);
		res = prep_stmt->executeQuery();

		while (res->next()) {
			Questions q;
			q.setQuestion_text(res->getString("question_text"));
			q.setSubject(res->getString("subject"));
			q.setQuestion_type(res->getInt("question_type"));
			q.setData1(res->getString("data1"));
			q.setData2(res->getString("data2"));
			q.setData3(res->getString("data3"));
			q.setData4(res->getString("data4"));
			q.setData5(res->getString("data5"));
			q.setMarks(res->getDouble("marks"));

			aq.push_back(q);
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return aq;
}

vector<string> Questions::getAllSubjects() {
	vector<string> subjects;
	subjects.reserve(10);
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		string SQL = "SELECT DISTINCT `subject` FROM `quiz_questions`";
		prep_stmt = DBcon->prepareStatement(SQL);
		res = prep_stmt->executeQuery();

		while (res->next()) {
			subjects.push_back(res->getString("subject"));
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return subjects;
}

vector<string> Questions::getAllQuestions(){
  vector<string> questions;
  questions.reserve(10);
  try {
    mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
    sql::Connection *DBcon = Conn->Connect();
    sql::PreparedStatement *prep_stmt;
    sql::ResultSet *res;
    string SQL = "SELECT * FROM `quiz_questions`";
    prep_stmt = DBcon->prepareStatement(SQL);
    res = prep_stmt->executeQuery();

    while (res->next()) {
      questions.push_back(res->getString("question_id"));
      questions.push_back(res->getString("subject"));
      questions.push_back(res->getString("question_text"));
    }
    DBcon->close();
  }
  catch (sql::SQLException &e) {
    cout << "# ERR: SQLException in " << __FILE__;
    cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
    cout << "# ERR: " << e.what();
    cout << " (MySQL error code: " << e.getErrorCode();
    cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
  return questions;
}

vector<Questions> Questions::getSelectQuestions(int number, string subjects) {
	vector<string> id;
	boost::split(id, subjects, boost::is_any_of(","), boost::token_compress_on);
	string subject = "'" + id[0] + "'";
	if (id.size() == 1) {
		subject += "";
	}
	else {
		for (int i = 1; i < id.size(); i++) {
			subject += ",'" + id[i] + "'";
		}
	}

	vector<Questions> aq;
	aq.reserve(20);

	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		string SQL = "SELECT * FROM quiz_questions WHERE `subject` in(" + subject + ") ORDER BY RAND() LIMIT ?";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setInt(1, number);
		res = prep_stmt->executeQuery();
		cout << SQL << " / " << subject << " / " << number << endl;

		while (res->next()) {
			Questions q;
			q.setQuestion_text(res->getString("question_text"));
			q.setSubject(res->getString("subject"));
			q.setQuestion_type(res->getInt("question_type"));
			q.setData1(res->getString("data1"));
			q.setData2(res->getString("data2"));
			q.setData3(res->getString("data3"));
			q.setData4(res->getString("data4"));
			q.setData5(res->getString("data5"));
			q.setMarks(res->getDouble("marks"));

			aq.push_back(q);
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return aq;
}

void Questions::cleanupQuestions(string subject) {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		res = DBcon->createStatement()->executeQuery("SET @num := 0; UPDATE quiz_questions SET question_id = @num := (@num+1) where subject = '" + subject + "'");
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}

	return;
}

void Questions::deleteQuestion(string questions_id, string quizN) {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		int res;
		string SQL = "DELETE FROM quiz_questions WHERE question_id = ? and subject = ?";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setString(1, questions_id);
		prep_stmt->setString(2, quizN);
		res = prep_stmt->executeUpdate();
		if (res > 0) {
			cleanupQuestions(quizN);
			cout << "Question Deleted!" << endl;
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return;
}

void Questions::deleteQuestions(string quizN) {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		int res;
		string SQL = "DELETE FROM quiz_questions WHERE subject = ?";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setString(1, quizN);
		res = prep_stmt->executeUpdate();
		if (res > 0) {
			cleanupQuestions(quizN);
			cout << "Question Deleted!" << endl;
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return;
}

void Questions::updateSubject(string subject1, string subject2) {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		int res;
		string SQL = "update quiz_questions set subject = ? WHERE subject = ?";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setString(1, subject1);
		prep_stmt->setString(2, subject2);
		res = prep_stmt->executeUpdate();
		if (res > 0) {
			cout << "Question Subject updated!" << endl;
		}
		DBcon->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	return;
}

int getLastQuestionID(){
  try {
  }
  catch (sql::SQLException &e) {
    cout << "# ERR: SQLException in " << __FILE__;
    cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
    cout << "# ERR: " << e.what();
    cout << " (MySQL error code: " << e.getErrorCode();
    cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
  return 0;
}

