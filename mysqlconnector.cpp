//
// Created by Jerahmeel Chua on 24/3/17.
//

#include "mysqlconnector.h"
mysqlconnector::mysqlconnector() {}
mysqlconnector::mysqlconnector(string host, string db, string uid, string pw) : host(host),
                                                                          dbname(db),
                                                                          user(uid),
                                                                          password(pw){

}
mysqlconnector::~mysqlconnector(){
  delete res;
  delete stmt;
  delete con;
}

sql::Connection * mysqlconnector::Connect() {
  std::cout << "mysqlconnector::Connect() Called" <<endl;
  try {
    /* Create a connection */
    driver = get_driver_instance();
    con = driver->connect("tcp://" + host + ":3306", user, password);
    con->setSchema("1009");
  }catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "<< __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
  return con;
}

void mysqlconnector::RunQuery(string sql){
  stmt = con->createStatement();
  res = stmt->executeQuery(sql);
}

void mysqlconnector::Close() {
  delete res;
  delete stmt;
  delete con;
}

