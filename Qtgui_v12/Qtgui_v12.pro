#-------------------------------------------------
#
# Project created by QtCreator 2017-03-22T18:47:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qtgui_v12
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        index.cpp \
    studentquizresult.cpp \
    studenttakequiz.cpp \
    studentviewquiz.cpp \
    studentviewresult.cpp \
    teachercreatequiz.cpp \
    teachereditqns.cpp \
    teachereditquiz.cpp \
    teacherviewquiz.cpp

HEADERS  += index.h \
    studentquizresult.h \
    studenttakequiz.h \
    studentviewquiz.h \
    studentviewresult.h \
    teachercreatequiz.h \
    teachereditqns.h \
    teachereditquiz.h \
    teacherviewquiz.h

FORMS    += index.ui \
    studentquizresult.ui \
    studenttakequiz.ui \
    studentviewquiz.ui \
    studentviewresult.ui \
    teachercreatequiz.ui \
    teachereditqns.ui \
    teachereditquiz.ui \
    teacherviewquiz.ui
