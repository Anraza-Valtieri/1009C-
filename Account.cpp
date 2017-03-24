//
// Created by Jerahmeel Chua on 20/3/17.
//
#include <iostream>
#include <sstream>
#include <iostream>

#include "Account.h"
#include "header.h"
using namespace std;
Account::Account(){}
Account::Account(const string &name,
                 const string &password) : name(name), password(password) { cout << "Created object Account" << endl; }
Account::~Account() {}

const string &Account::getUniqID() const {
  return uniqID;
}
void Account::setUniqID(const string &uniqID) {
  Account::uniqID = uniqID;
}
int Account::getType() const {
  return type;
}
void Account::setType(int type) {
  Account::type = type;
}
const string &Account::getEmail() const {
  return email;
}
void Account::setEmail(const string &email) {
  Account::email = email;
}
int Account::getAID() const {
  return aID;
}
void Account::setAID(int aID) {
  Account::aID = aID;
}

const string &Account::getName() const {
  return name;
}
void Account::setName(const string &name) {
  Account::name = name;
}
const string &Account::getPassword() const {
  return password;
}
void Account::setPassword(const string &password) {
  Account::password = password;
}

bool Account::authenticate(string name, string password) {
  cout << "Attempt to auth " << name << " With " << password << endl;
  mysqlconnector* Conn = new mysqlconnector("127.0.0.1", "1009", "root", "");
  sql::Connection *DBcon = Conn->Connect();
  sql::PreparedStatement  *prep_stmt;
  sql::ResultSet *res;
  string SQL = "SELECT * FROM accounts WHERE uniqueID=?";
  prep_stmt = DBcon->prepareStatement(SQL);
  prep_stmt->setString(1,name);
  res = prep_stmt->executeQuery();
  string dbID;
  string dbPw;
  if (res->next()){
    dbID = res->getString("uniqueID");
    dbPw = res->getString("password");
  }
  if(dbID == ""){
    cout << "[Account::Authenticate] Failed to find userID" << endl;
    return false;
  }
  cout << "[Account::Authenticate] ID Received: " << dbID << endl;
  cout << "[Account::Authenticate] ID: " << name << endl;
  cout << "[Account::Authenticate] Password Received: " << password << endl;
  cout << "[Account::Authenticate] Password: " << dbPw << endl;

  if(password == dbPw){
    cout << "[Account::Authenticate] Login SUCCESS!" << endl;
    setName(res->getString("name"));
    setEmail(res->getString("email"));
    setType(res->getInt("type"));
    setAID(res->getInt("id"));
  }
  else {
    cout << "[Account::Authenticate] Login FAILED due to Mismatch!" << endl;
    return false;
  }
  return true;
}