cmake_minimum_required(VERSION 3.6)
project(C___Jerry)

set(CMAKE_CXX_STANDARD 11)
include_directories("usr/local/Cellar")
set(CMAKE_PREFIX_PATH "Users/jerahmeelchua/Qt/5.8/clang_64")
set(CMAKE_CXX_FLAGS "-I /usr/local/Cellar -lmysqlcppconn")
set(SOURCE_FILES main.cpp header.h Account.cpp Account.h mysqlconnector.cpp mysqlconnector.h Teacher.cpp Teacher.h questions.cpp quiz.cpp result.cpp Student.cpp Student.h)
add_executable(C___Jerry ${SOURCE_FILES})



#find_package( Qt5Core REQUIRED )
#find_package( Qt5Widgets REQUIRED )
#find_package( Qt5Gui REQUIRED )
#qt5_use_modules( MyTest Core Widgets Gui )