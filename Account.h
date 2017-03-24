//
// Created by Jerahmeel Chua on 24/3/17.
//

#include "header.h"
using namespace std;

#ifndef C_JERRY_ACCOUNT_H
#define C_JERRY_ACCOUNT_H

class Account {
 public:
  Account();
  Account(const string &name, const string &password);
  virtual ~Account();
  const string &getUniqID() const;
  void setUniqID(const string &uniqID);
  int getType() const;
  void setType(int type);
  const string &getEmail() const;
  void setEmail(const string &email);
  int getAID() const;
  void setAID(int aID);
  const string &getName() const;
  void setName(const string &name);
  const string &getPassword() const;
  void setPassword(const string &password);
  bool authenticate(string name, string password);

 private:
  string name;
  string password;
  string uniqID;
  int type;
  string email;
  int aID;
};
#endif //C_JERRY_ACCOUNT_H

