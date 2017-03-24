
/* Standard C++ includes */
#include "header.h"
#include "Account.h"
#include "mysqlconnector.h"

using namespace std;
int main(){
  cout << "Setting up MySQL connection" << endl;
  mysqlconnector* Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
  sql::Connection * DBcon = Conn->Connect();
  cout << "MySQL connection Success" << endl;
  DBcon->close();
  string user, password;
  cout << "Username: " << endl;
  cin >> user;
  cout << "Password: " << endl;
  cin >> password;
  Account acct(user, password);
  bool login = acct.authenticate(acct.getName(), acct.getPassword());
  if(!login)
    cout << "[MAIN] Failed login process";
  cout << "END";
}