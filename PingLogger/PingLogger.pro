#-------------------------------------------------
#
# Project created by QtCreator 2011-05-30T21:45:11
#
#-------------------------------------------------

QT       += core gui

TARGET = PingLogger
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        elemping.cpp \
        log2xml.cpp \
        log2txt.cpp \
        xml2txt.cpp \
        logtime.cpp

HEADERS  += mainwindow.hpp \
            elemping.hpp \
            log2xml.hpp \
            log2txt.hpp \
            xml2txt.hpp \
            logtime.hpp

FORMS    += mainwindow.ui

win32:RC_FILE = PingLogger.rc

RESOURCES += \
    Icons.qrc
