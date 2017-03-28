//
// Created by Jerahmeel Chua on 24/3/17.
//

#include "Teacher.h"
int Teacher::getAID() const {
  return aID;
}
Teacher::Teacher() {}
Teacher::Teacher(int aID, const string &name, const string &uniqID, const string &email)
    : aID(aID), name(name), uniqID(uniqID), email(email) {}

void Teacher::setAID(int aID) {
  Teacher::aID = aID;
}
const string &Teacher::getName() const {
  return name;
}
void Teacher::setName(const string &name) {
  Teacher::name = name;
}
const string &Teacher::getUniqID() const {
  return uniqID;
}
void Teacher::setUniqID(const string &uniqID) {
  Teacher::uniqID = uniqID;
}
const string &Teacher::getEmail() const {
  return email;
}
void Teacher::setEmail(const string &email) {
  Teacher::email = email;
}
