cmake_minimum_required(VERSION 3.6)
project(C___Jerry)

set(CMAKE_CXX_STANDARD 11)
include_directories("usr/local/Cellar")
set(CMAKE_CXX_FLAGS "-I /usr/local/Cellar -lmysqlcppconn")
set(SOURCE_FILES main.cpp header.h Account.cpp Account.h mysqlconnector.cpp mysqlconnector.h Teacher.cpp Teacher.h)
add_executable(C___Jerry ${SOURCE_FILES})