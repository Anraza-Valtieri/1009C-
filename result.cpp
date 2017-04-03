#include "result.h"

Result::Result() {
	this->quizname = "";
	this->markObtained = 0;
	this->totalMarks = 0;
	this->inputAnswer = "";
	this->question = "";
	this->indvmark = "";
}

Result::Result(int userID, string quizname, int markObtained, int totalMarks, string inputAnswer, string actualAnswer, string question, string indvmark) {
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

int Result::getMarkObtained() {
	return markObtained;
}

void Result::setMarkObtained(int markObtained) {
	this->markObtained = markObtained;
}

int Result::getTotalMarks() {
	return totalMarks;
}

void Result::setTotalMarks(int totalMarks) {
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
		prep_stmt->setInt(3, markObtained);
		prep_stmt->setInt(4, totalMarks);
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
			result.setMarkObtained(res->getInt("obtained"));
			result.setTotalMarks(res->getInt("totalmark"));
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

vector<Result> Result::grabResultList(int aID) {
	vector<Result> resultList;
	resultList.reserve(20);

	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		string SQL = "SELECT * FROM result WHERE user = ?";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setInt(1, aID);
		res = prep_stmt->executeQuery();

		while (res->next()) {
			Result result;
			result.setResultID(res->getInt("rID"));
			result.setQuizname(res->getString("quizname"));

			resultList.push_back(result);
			
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
	return resultList;
}