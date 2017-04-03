//
// Created by Jerahmeel Chua on 23/3/17.
//

#ifndef C_JERRY_HEADER_H
#define C_JERRY_HEADER_H

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
#include <cppconn/prepared_statement.h>
#include <boost/shared_ptr.hpp>
#include <string.h>
#include "mysqlconnector.h"
#include <boost/algorithm/string/classification.hpp> // Include boost::for is_any_of
#include <boost/algorithm/string/split.hpp> // Include for boost::split
#include <boost/algorithm/string/case_conv.hpp> // Include for boost::tolower


#endif //C_JERRY_HEADER_H
