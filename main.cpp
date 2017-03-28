
/* Standard C++ includes */
#include "header.h"
#include "Account.h"
#include "Teacher.h"
#include "questions.h"
#include "quiz.h"
#include "mysqlconnector.h"

using namespace std;
int main() {
	cout << "Setting up MySQL connection" << endl;
	mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
	sql::Connection *DBcon = Conn->Connect();
	cout << "MySQL connection Success" << endl;
	DBcon->close();
	string command = "";
	string user, password;
	cout << "Username: " << endl;
	cin >> user;
	cout << "Password: " << endl;
	cin >> password;
	Account acct(user, password);
	//Teacher object
	Teacher teacher;
	//STudent object
	//Student student;
	bool login = acct.authenticate(acct.getName(), acct.getPassword());
	int accttype = -1;
	if (!login) {
		cout << "[MAIN] Failed login process";
		return 0;
	}
	else {
		accttype = acct.getType();
		switch (accttype) {

		case 0: // STUDENT
			cout << "Student " << acct.getName() << " has logged in." << endl << endl;
			break; //optional
		case 1: // Teacher
			cout << "Teacher " + acct.getName() + " has logged in." << endl << endl;
			teacher = Teacher::Teacher(acct.getAID(), acct.getName(), acct.getUniqID(), acct.getEmail());
			break; //optional
		case 2: // Admin
			cout << "Admin " + acct.getName() + " has logged in." << endl << endl;
			break; //optional
				   // you can have any number of case statements.
		default: //Optional
			cout << "Unknown Type " + acct.getName() + " has logged in." << endl << endl;
			//continue;
		}
	}
	// WE have logged in somehow.

	while (command != "quit") {
		cout << "Enter command/Action: ";
		cin >> command;
		if (accttype == 0) { // Student
			if (command == "questest") {
				cout << "Command questest called." << endl;
				Questions q;
				vector<Questions> aq = q.getQuestionsData("1,2,3,4,5,8");
				for (int i = 0; i < aq.size(); i++) {
					cout << aq[i].getQuestion_text() << endl;
				}
			}
		}

		if (accttype == 1) { // Teacher
          if(command == "viewlist"){
            Quiz quiz;
            quiz.getQuizList();
          }

          if(command == "openquiz"){
            Quiz quiz;
            string args = "";
            cout << "Insert Quiz name: ";
            cin >> args;
            quiz.getQuiz(args);

          }
          if(command == "createquiz"){

          }
          if(command == "createtopic"){

          }
          if(command == "createquestions"){

          }
        }
	}
	cout << "END" << endl;
}