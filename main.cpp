
/* Standard C++ includes */
#include "header.h"
#include "Account.h"
#include "Teacher.h"
#include "Student.h"
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
	Student student;
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
          student = Student::Student(acct.getAID(), acct.getName(), acct.getUniqID(), acct.getEmail());
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
    if (accttype == 0) { // Student
      if(command == "" || command == "help" || command == "command") {
        cout << "Command list: " << endl;
        cout << "" << endl;
      }
      cout << "Enter command/Action: ";
      //getline(cin, command);
      cin >> command;
      if (command == "questest") {
        cout << "Command questest called." << endl;
        Questions q;
        vector<Questions> aq = q.getQuestionsData("1,2,3,4,5,8");
        for (int i = 0; i < aq.size(); i++) {
          cout << aq[i].getQuestion_text() << endl;
        }
      }
      else if (command == "practice") {
        student.attemptQuestions();
      }
    }

    if (accttype == 1) { // Teacher
      if(command == "" || command == "help" || command == "command") {
        cout << "Command list: " << endl;
        cout << "viewquizlist, viewquestionlist, openquiz, " << endl;
        cout << "createquiz, createtopic, createquestion, " << endl;
        cout << "linkquestions" << endl;
      }

      cout << endl << "Enter command/Action: ";
      cin >> command;
      if(command == "viewquizlist"){
        Quiz quiz;
        quiz.getQuizList();
        command = ""; // This should be at the very end of every command
      }

      if(command == "viewquestionlist"){
        Questions q;
        vector<string> questions = q.getAllQuestions();
        cout << endl << "Available questions: " << endl;
        for (int i = 0; i < questions.size(); i += 3) {
          cout << questions[i] << ", " << questions[i+1] << ", " << questions[i+2] << endl;
        }
        cout << endl;
        command = ""; // This should be at the very end of every command
      }

      if(command == "openquiz"){
        Quiz quiz;
        string args;
        cin.ignore();
        cout << "Quiz name: ";
        getline(cin, args);
        quiz.getQuiz(args);
        string qs = quiz.getSubject();
        Questions q;
        vector<Questions> aq = q.getQuestionsDataBySubject(qs);
        for (int i = 0; i < aq.size(); i++) {
          cout << "Question No: " << i+1 << endl;
          cout << "Question text: " << aq[i].getQuestion_text() << endl; // Question text
          string type = "";
          switch (aq[i].getQuestion_type()){
            case 0:
              type = "MCQ";
              break;
            case 1:
              type = "T/F";
              break;
            case 2:
              type = "SA";
              break;
            case 3:
              type = "map";
              break;
            default:
              type = "Error";
          }
          cout << "Question type: " << type << endl; // Question type
          if(aq[i].getQuestion_type() == 0){ //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
            cout << "Question data 1: " << aq[i].getData1() << endl;
            cout << "Question data 2: " << aq[i].getData2() << endl;
            cout << "Question data 3: " << aq[i].getData3() << endl;
            cout << "Question data 4: " << aq[i].getData4() << endl;
          }
          if(aq[i].getQuestion_type() == 1){ //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
            cout << "Question data 1: " << aq[i].getData1() << endl;
            cout << "Question data 2: " << aq[i].getData2() << endl;
          }
          if(aq[i].getQuestion_type() == 2){ //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
            cout << "Question data 1: " << aq[i].getData1() << endl;
          }
          if(aq[i].getQuestion_type() == 3){ //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3

          }
          cout << endl;
          command = ""; // This should be at the very end of every command
        }
      }
      if(command == "createquiz"){
        string args = "";
        cout << "Insert Quiz name to create: ";
        cin >> args;
        Quiz quiz(args, "", args);
        quiz.createquiz();
        command = ""; // This should be at the very end of every command
      }
      if(command == "createtopic"){

        command = ""; // This should be at the very end of every command

      }
      if(command == "createquestions"){
        command = ""; // This should be at the very end of every command
      }

      if(command == "linkquestions"){
        string args = "";
        cout << "Insert Quiz name to insert: ";
        cin >> args;
        string args2 = "";
        cin.ignore();
        cout << "Insert Question IDs: ";
        getline(cin, args2);
        //cin >> args2;
        Quiz q;
        q.linkQuestion(args, args2);
        command = ""; // This should be at the very end of every command
      }
    }
	}
	cout << "END" << endl;
}