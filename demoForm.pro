#-------------------------------------------------
#
# Project created by QtCreator 2014-04-30T01:31:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demoForm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    myline.cpp \
    mycircle.cpp

HEADERS  += mainwindow.h \
    myline.h \
    mycircle.h

FORMS    += mainwindow.ui \
    myline.ui \
    mycircle.ui
