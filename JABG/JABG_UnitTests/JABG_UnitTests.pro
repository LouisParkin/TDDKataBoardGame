#-------------------------------------------------
#
# Project created by QtCreator 2016-05-20T13:14:24
#
#-------------------------------------------------

QT       += widgets testlib

TARGET = tst_jabg_unitteststest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_jabg_unitteststest.cpp \
          $$PWD/../JABG_Game/board.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    tst_jabg_unittests.h
