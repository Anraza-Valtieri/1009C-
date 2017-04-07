
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
        cout << "\nCommand list: " << endl;
        cout << "viewquizlist, viewquestionlist, openquiz, " << endl;
        cout << "createquiz, createquestion, " << endl;
        cout << "editquiz, editquestion, settopic, " << endl;
        cout << "linkquestions, quit" << endl;
      }

      cout << endl << "Enter command/Action: ";
      cin >> command;
      if(command == "viewquizlist"){
        Quiz quiz;
        quiz.getQuizList();
        command = ""; // This should be at the very end of every command
      }

      if(command == "viewquestionlist"){
        string args;
        cout << "Filter (all/Subject): ";
        cin.ignore();
        getline(cin, args);
        if(args == "all") {
          Questions q;
          vector<string> questions = q.getAllQuestions();
          cout << endl << "Available questions: " << endl;
          for (int i = 0; i < questions.size(); i += 3) {
            cout << questions[i] << ", " << questions[i + 1] << ", " << questions[i + 2] << endl;
          }
        }
        else{
          Questions q;
          vector<Questions> questions = q.getQuestionsDataBySubject(args);
          if(questions.size() > 0) {
            cout << endl << "Available questions: " << endl;
            for (int i = 0; i < questions.size(); i++) {
              cout << questions[i].getQuestion_id() << ", " << questions[i].getSubject() << ", "
                   << questions[i].getQuestion_text() << endl;
            }
          } else
            cout << "No Question data returned. Invalid Subject." << endl;
        }
        cout << endl;
        command = ""; // This should be at the very end of every command
      }

      if(command == "openquiz") {
        Quiz quiz;
        string args;
        cin.ignore();
        cout << "Quiz name: ";
        getline(cin, args);
        quiz.getQuiz(args);
        string qs = quiz.getSubject();
        Questions q;
        vector<Questions> aq = q.getQuestionsDataBySubject(qs);
        if (aq.size() > 0) {
          for (int i = 0; i < aq.size(); i++) {
            cout << "Question No: " << i + 1 << " DBid: " << aq[i].getQuestion_id() << endl;
            cout << "Question text: " << aq[i].getQuestion_text() << endl; // Question text
            string type = "";
            switch (aq[i].getQuestion_type()) {
              case 0:type = "MCQ";
                break;
              case 1:type = "T/F";
                break;
              case 2:type = "SA";
                break;
              case 3:type = "map";
                break;
              default:type = "Error";
            }
            cout << "Question type: " << type << endl; // Question type
            if (aq[i].getQuestion_type() == 0) { //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
              cout << "Question data 1: " << aq[i].getData1() << endl;
              cout << "Question data 2: " << aq[i].getData2() << endl;
              cout << "Question data 3: " << aq[i].getData3() << endl;
              cout << "Question data 4: " << aq[i].getData4() << endl;
            }
            if (aq[i].getQuestion_type() == 1) { //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
              cout << "Question data 1: " << aq[i].getData1() << endl;
              cout << "Question data 2: " << aq[i].getData2() << endl;
            }
            if (aq[i].getQuestion_type() == 2) { //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
              cout << "Question data 1: " << aq[i].getData1() << endl;
            }
            if (aq[i].getQuestion_type() == 3) { //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3

            }
            cout << endl;
            command = ""; // This should be at the very end of every command
          }
        } else {

          vector<Questions> aq = q.getQuestionsData(quiz.getQuestionids());
          if (aq.size() > 0) {
            for (int i = 0; i < aq.size(); i++) {
              cout << "Question No: " << i + 1 << " DBid: " << aq[i].getQuestion_id() << endl;
              cout << "Question text: " << aq[i].getQuestion_text() << endl; // Question text
              string type = "";
              switch (aq[i].getQuestion_type()) {
                case 0:type = "MCQ";
                  break;
                case 1:type = "T/F";
                  break;
                case 2:type = "SA";
                  break;
                case 3:type = "map";
                  break;
                default:type = "Error";
              }
              cout << "Question type: " << type << endl; // Question type
              if (aq[i].getQuestion_type() == 0) { //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
                cout << "Question data 1: " << aq[i].getData1() << endl;
                cout << "Question data 2: " << aq[i].getData2() << endl;
                cout << "Question data 3: " << aq[i].getData3() << endl;
                cout << "Question data 4: " << aq[i].getData4() << endl;
              }
              if (aq[i].getQuestion_type() == 1) { //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
                cout << "Question data 1: " << aq[i].getData1() << endl;
                cout << "Question data 2: " << aq[i].getData2() << endl;
              }
              if (aq[i].getQuestion_type() == 2) { //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3
                cout << "Question data 1: " << aq[i].getData1() << endl;
              }
              if (aq[i].getQuestion_type() == 3) { //MCQ - 0 | T/F - 1 | SA - 2 | Map - 3

              }
              cout << endl;
              command = ""; // This should be at the very end of every command
            }
          } else
            cout << "No Question data returned. Invalid Quiz Name." << endl;
        }
      }
      if(command == "createquiz"){
        string args = "";
        cout << "Insert Quiz name to create: " << endl;
        //cin >> args;
        cin.ignore();
        getline(cin, args);
        Quiz quiz(args, "", args);
        quiz.createquiz();
        command = ""; // This should be at the very end of every command
      }

      if(command == "editquestion"){
        string qtext, qtopic, data1, data2, data3, data4, data5, teacherid;
        int qtype, qid;
        double marks;
        cout << "Question ID to edit: " << endl;
        cin >> qid;
        Questions q;
        vector<Questions> aq = q.getQuestionsData(to_string(qid));
        if(aq.size() > 0){
          teacherid = acct.getName();
          qtopic = aq[0].getSubject();
          qtype = aq[0].getQuestion_type();
          cout << "Current Question Type: " << qtype << endl;
          cout << "New Question Type: " << endl;
          cin >> qtype;

          qtext = aq[0].getQuestion_text();
          cout << "Current Question text: " << qtext << endl;
          cout << "New Question text: " << endl;
          cin.ignore();
          getline(cin, qtext);
          vector<string> quests;
          switch (qtype){
            case 0:
              data1 = aq[0].getData1();
              cout << "Current Option 1:" << data1 << endl;
              cout << "New Option 1:"<< endl;
              cin.clear();
              getline(cin, data1);
              data2 = aq[0].getData2();
              cout << "Current Option 2:" << data2 << endl;
              cout << "New Option 2:"<< endl;
              cin.clear();
              getline(cin, data2);
              data3 = aq[0].getData3();
              cout << "Current Option 3:" << data3 << endl;
              cout << "New Option 3:"<< endl;
              cin.clear();
              getline(cin, data3);
              data4 = aq[0].getData4();
              cout << "Current Option 4:" << data4 << endl;
              cout << "New Option 4:"<< endl;
              cin.clear();
              getline(cin, data4);
              data5 = aq[0].getData5();
              cout << "Current Answers:" << data5 << endl;
              cout << "New Answers (1/2/3/4, comma seperated NO SPACES):" << endl;
              cin.clear();
              getline(cin, data5);

              break;
            case 1:
              while(true) {
                data5 = aq[0].getData5();
                cout << "Current Answer (1/2): " << data5 << endl;
                cout << "New Answer (1/2): " << endl;
                cin >> data5;
                if (data5 == "1" || data5 == "2"){
                  break;
                }
              }

              break;
            case 2:
              data5 = aq[0].getData5();
              cout << "Current Answer: " << data5 << endl;
              cout << "New Answer (comma seperated NO SPACES):" << endl;
              cin.clear();
              getline(cin, data5);
              break;
            case 3:
              data1 = aq[0].getData1();
              cout << "Current Options : " << data1 << endl;
              cout << "New Options (comma seperated NO SPACES): " << endl;
              cin.clear();
              getline(cin, data1);
              boost::split(quests, data1, boost::is_any_of(","), boost::token_compress_on);
              data5 = aq[0].getData5();
              cout << "Current Option numbers as the the answers (No spaces,seperated by comma): " << data5 << endl;
              cout << "New Option numbers as the the answers (No spaces,seperated by comma): " << data5 << endl;
              getline(cin, data5);
              //for (auto const& s : ans) { data5 += s; };
              break;
            default:
              cout << "Question Type Error: " << qtype << endl;
              break;

          }
          marks = aq[0].getMarks();
          cout << "Current Marks: " << marks << endl;
          cout << "New Marks: ";
          while(!(cin >> marks)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.  Try again: ";
          }
          cout << "Question ID: " << qid << ", "
               << "Teacher ID: " << teacherid << ", "
               << "QTopic: " << qtopic << ", "
               << "Qtext: " << qtext << ", "
               << "Type: " << qtype << ", "
               << "Data1: " << data1 << ", "
               << "Data2: " << data2 << ", "
               << "Data3: " << data3 << ", "
               << "Data4: " << data4 << ", "
               << "Data5: " << data5 << ", "
               << "Marks: " << marks << ", "
               << endl;
          q.setQuestion_id(qid);
          q.setTeacher_id(teacherid);
          q.setSubject(qtopic);
          q.setQuestion_text(qtext);
          q.setQuestion_type(qtype);
          q.setData1(data1);
          q.setData2(data2);
          q.setData3(data3);
          q.setData4(data4);
          q.setData5(data5);
          q.setMarks(marks);
          q.updateQuestion();
          cout << endl;
        } else
          cout << "No Question data returned. Invalid Question ID" << endl;
        command = ""; // This should be at the very end of every command
      }

      if(command == "createquestion"){
        string qtext, qtopic, data1, data2, data3, data4, data5;
        int qtype;
        double marks;
        cout << "Question Topic: "<< endl;
        cin.ignore();
        getline(cin,qtopic);
        cout << "Question text: "<< endl;
        getline(cin, qtext);
        cout << "Question type (MCQ - 0 | T/F - 1 | SA - 2 | Map - 3): ";
        while(!(cin >> qtype)){
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cout << "Invalid input.  Try again: ";
        }
        vector<string> quests;
        switch (qtype){
          case 0:
            cout << "Option 1:" << endl;
            cin.ignore();
            getline(cin, data1);
            cout << "Option 2:" << endl;
            cin.clear();
            getline(cin, data2);
            cout << "Option 3:" << endl;
            cin.clear();
            getline(cin, data3);
            cout << "Option 4:" << endl;
            cin.clear();
            getline(cin, data4);
            cout << "Answer (1/2/3/4, comma seperated NO SPACES):" << endl;
            cin.clear();
            getline(cin, data5);
            /*while(!(cin >> data5)){
              cin.clear();
              cin.ignore(numeric_limits<streamsize>::max(), '\n');
              cout << "Invalid input.  Try again: ";
            }*/
            break;
          case 1:
            cout << "T/F Selected" << endl;
            while(true) {
              cout << "Answer (1/2):" << endl;
              //getline(cin, data5);
              cin >> data5;
              if (data5 == "1" || data5 == "2"){
                break;
              }
              cout << data5;
            }

            break;
          case 2:
            cout << "SA Selected" << endl;
            cout << "Answer (comma seperated NO SPACES):" << endl;
            cin.ignore();
            getline(cin, data5);
            break;
          case 3:
            cout << "MAP Selected" << endl;
            cout << "Options (comma seperated NO SPACES):" << endl;
            cin.ignore();
            getline(cin, data1);
            cout << "Options entered: " << endl << data1 << endl;
            boost::split(quests, data1, boost::is_any_of(","), boost::token_compress_on);
            cout << "Option numbers as the the answers (No spaces,seperated by comma): " << endl;
            getline(cin, data5);
            //for (auto const& s : ans) { data5 += s; };
            break;
          default:
            cout << "Question Type Error: " << qtype << endl;
            break;

        }
        cout << "Marks: ";
        while(!(cin >> marks)){
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cout << "Invalid input.  Try again: ";
        }
        cout << "qtopic: " << qtopic << ", "
             << "Qtext: " << qtext << ", "
             << "Type: " << qtype << ", "
             << "Data1: " << data1 << ", "
             << "Data2: " << data2 << ", "
             << "Data3: " << data3 << ", "
             << "Data4: " << data4 << ", "
             << "Data5: " << data5 << ", "
             << "Marks: " << marks << ", "
             << endl;

        Questions quest(teacher.getName(), qtopic,  qtext, qtype, data1, data2, data3, data4, data5, marks);
        quest.createQuestion();
        command = ""; // This should be at the very end of every command
      }
      if(command == "settopic"){
        int args1;
        cout << "Question ID to edit: ";
        cin >> args1;
        Questions q;
        vector<Questions> questions = q.getQuestionsData(to_string(args1));
        if(questions.size() > 0) {
          string qtopic;
          cin.ignore();
          cout << "Question Topic to set: ";
          getline(cin, qtopic);
          q.updateSubject(args1, qtopic);
        } else
          cout << "No data returned, Invalid Question ID." << endl;
        command = ""; // This should be at the very end of every command

      }

      if(command == "linkquestions"){
        string args = "";
        cout << "Insert Quiz name to insert: ";
        cin >> args;
        Quiz q;
        if(q.checkExist(args)) {
          string args2 = "";
          cin.ignore();
          cout << "Insert Question IDs: ";
          getline(cin, args2);
          //cin >> args2;
          q.linkQuestion(args, args2);
        } else
          cout << "No data returned." << endl;

        command = ""; // This should be at the very end of every command
      }

      if(command == "editquiz"){
        string args = "";
        cout << "Quiz name to edit: ";
        cin >> args;
        Quiz quiz;
        if(quiz.checkExist(args)) {
          string args2 = "";
          cout << "New Quiz name: ";
          cin >> args2;

          quiz.setUpdateQuizName(args2, args);
          cout << endl;
        } else
          cout << "No data returned." << endl;

        command = ""; // This should be at the very end of every command
      }
    }
	}
	cout << "END" << endl;
}