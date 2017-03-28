//
// Created by Jerahmeel Chua on 24/3/17.
//
#include "header.h"
using namespace std;

class Teacher{
 public:
  Teacher();
  Teacher(int aID, const string &name, const string &uniqID, const string &email);
  int getAID() const;
  void setAID(int aID);
  const string &getName() const;
  void setName(const string &name);
  const string &getUniqID() const;
  void setUniqID(const string &uniqID);
  const string &getEmail() const;
  void setEmail(const string &email);

  void teacherViewQuiz(int ID);
  void teacherEditQuiz(int ID);

 protected:
  int aID;
  string name;
  string uniqID;
  string email;

};