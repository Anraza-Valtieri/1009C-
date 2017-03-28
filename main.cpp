
/* Standard C++ includes */
#include "header.h"
#include "Account.h"
#include "Teacher.h"
#include "mysqlconnector.h"

using namespace std;
int main() {
  cout << "Setting up MySQL connection" << endl;
  mysqlconnector *Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
  sql::Connection *DBcon = Conn->Connect();
  cout << "MySQL connection Success" << endl;
  DBcon->close();
  string command = "";
  while (command != "quit") {
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
    } else {
      int accttype = acct.getType();
      switch (accttype) {
        case 0  : // STUDENT
          cout << "Student " << acct.getName() << " has logged in." << endl;
          break; //optional
        case 1  : // Teacher
          cout << "Teacher " + acct.getName() + " has logged in." << endl;
          teacher = Teacher::Teacher(acct.getAID(), acct.getName(), acct.getUniqID(), acct.getEmail());
          break; //optional
        case 2  : // Admin
          cout << "Admin " + acct.getName() + " has logged in." << endl;
          break; //optional
          // you can have any number of case statements.
        default : //Optional
          cout << "Unknown Type " + acct.getName() + " has logged in." << endl;
          continue;
      }
    }
    // WE have logged in somehow.
    cout << "Enter command/Action: ";
    cin >> command;
    if(accttype == 0){ // Student

    }

    if(accttype == 1){ // Teacher
      
    }
  }
  cout << "END";
}