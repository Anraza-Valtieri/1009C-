#include "quiz.h"

Quiz::Quiz() {
	quiz_id = -1;
}

Quiz::Quiz(string quizname, string questionids, string subject) {
	this->quizname = quizname;
	this->questionids = questionids;
	this->subject = subject;
}

int Quiz::getQuiz_id() {
	return quiz_id;
}

void Quiz::setQuiz_id(int quiz_id) {
	this->quiz_id = quiz_id;
}

string Quiz::getQuizname() {
	return quizname;
}

void Quiz::setQuizname(string quizname) {
	this->quizname = quizname;
}

string Quiz::getQuestionids() {
	return questionids;
}

void Quiz::setQuestionids(string questionids) {
	this->questionids = questionids;
}

string Quiz::getSubject() {
	return subject;
}

void Quiz::setSubject(string subject) {
	this->subject = subject;
}

void Quiz::getQuizDBName() {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		string SQL = "SELECT quizname FROM quiz WHERE quiz_id=" + quiz_id;
		prep_stmt = DBcon->prepareStatement(SQL);
		res = prep_stmt->executeQuery();

		if (res->next()) {
			this->setQuizname(res->getString("quizname"));
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

string Quiz::getQuestions(string subject) {
	//Not used
	return "";
}

void Quiz::createquiz() {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		int res;
		string SQL = "INSERT INTO quiz (quizname, question_id, subject) VALUES (?, ?, ?)";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setString(1, quizname);
		prep_stmt->setString(2, questionids);
		prep_stmt->setString(3, subject);
		res = prep_stmt->executeUpdate();
		if (res > 0) {
			cout << "Quiz Created!" << endl;
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
	//main.quizName = subject ??
	return;
}

bool Quiz::checkExist(string subject) {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		string SQL = "SELECT * FROM quiz where quizname = '" + subject + "'";
		prep_stmt = DBcon->prepareStatement(SQL);
		res = prep_stmt->executeQuery();

		bool val = res->next();
		if (val == false) {
			cout << "Quiz name does not exist!" << endl;
			return false;
		}
		else if (val) {
			cout << "Quiz name does exist!" << endl;
			return true;
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
	return false;
}

void Quiz::setUpdateQuizName(string subject, string mainQuizName) {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		int res;
		string SQL = "UPDATE quiz set subject = ?, quizname = ? where (subject = ?)";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setString(1, subject);
		prep_stmt->setString(2, subject);
		prep_stmt->setString(3, mainQuizName);
		res = prep_stmt->executeUpdate();
		if (res > 0) {
			cout << "Quiz name updated!" << endl;
			Questions q;
			q.updateSubject(subject, mainQuizName);
			//main.quizName = subject;
			setSubject(subject);
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

void Quiz::cleanupQuiz() {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		sql::ResultSet *res;
		res = DBcon->createStatement()->executeQuery("SET @num := 0; UPDATE quiz SET quiz_id = @num := (@num+1)");
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

void Quiz::deleteQuiz(string quiz_id, string mainQuizName) {
	try {
		mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
		sql::Connection *DBcon = Conn->Connect();
		sql::PreparedStatement *prep_stmt;
		int res;
		string SQL = "DELETE FROM quiz WHERE subject = ?";
		prep_stmt = DBcon->prepareStatement(SQL);
		prep_stmt->setString(1, quiz_id);
		res = prep_stmt->executeUpdate();
		if (res > 0) {
			cleanupQuiz();
			Questions q;
			q.deleteQuestions(mainQuizName);
			cout << "Quiz " << mainQuizName << " deleted!" << endl;
			//main.quizName = "";
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