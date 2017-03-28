#include "result.h"

Result::Result() {
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
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		int res;
		string SQL = "INSERT INTO results (user, quizname, obtained, totalmark, inputanswer, actualanswer, question, indvmark) VALUES (?, ?, ?, ?, ?, ?, ?, ?)";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setInt(1, userID);
		prep_stmt->setString(2, quizname);
		prep_stmt->setString(3, markObtained);
		prep_stmt->setString(4, totalMarks);
		prep_stmt->setString(5, inputAnswer);
		prep_stmt->setString(6, actualAnswer);
		prep_stmt->setString(7, question);
		prep_stmt->setString(8, indvmark);
		res = prep_stmt->executeUpdate();
		if (res > 0) {
			cout << "[RESULT]A new result was inserted successfully!" << endl;
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
	//Close db connection?
	return;
}

Result Result::getSingleResult() {
	Result result; 
	
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		string SQL = "SELECT * FROM results WHERE rID=" + resultID;
		prep_stmt = DBcon->prepareStatement(SQL);
		res = prep_stmt->executeQuery();

		if (res->next()) {
			result.setUserID(res->getInt("user"));
			result.setQuizname(res->getString("quizname"));
			result.setMarkObtained(res->getString("obtained"));
			result.setTotalMarks(res->getString("totalmark"));
			result.setInputAnswer(res->getString("inputanswer"));
			result.setActualAnswer(res->getString("actualanswer"));
			result.setQuestion(res->getString("question"));
			result.setIndvmark(res->getString("indvmark"));
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
	return result;
}