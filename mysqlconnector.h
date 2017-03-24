//
// Created by Jerahmeel Chua on 24/3/17.
//
/* Standard C++ includes */
#include <stdlib.h>
#include <iostream>
#include <string>
/*
  Include directly the different
  headers from cppconn/ and mysql_driver.h + mysql_util.h
  (and mysql_connection.h). This will reduce your build time!
*/
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
using namespace std;
#ifndef C_JERRY_MYSQLCONNECTOR_H
#define C_JERRY_MYSQLCONNECTOR_H

class mysqlconnector {
 public:
  mysqlconnector();
  mysqlconnector(string host, string db, string uid, string pw);
  ~mysqlconnector();


  sql::Connection * Connect();
  void Close();
  int GetAffectedRows();
  char *GetError();
  int IsConnected();
  void RunQuery(string sql);

 protected:
  string host;
  string dbname;
  string user;
  string password;
  int affected_rows;
  sql::Driver *driver;
  sql::Connection *con;
  sql::Statement *stmt;
  sql::ResultSet *res;
  sql::PreparedStatement  *prep_stmt;
};

#endif //C_JERRY_MYSQLCONNECTOR_H
