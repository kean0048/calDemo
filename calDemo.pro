#-------------------------------------------------
#
# Project created by QtCreator 2020-05-28T11:32:46
#
#-------------------------------------------------

QT       += core gui
RC_ICONS  = calculator.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = calDemo
TEMPLATE = app


SOURCES += main.cpp\
        calmain.cpp \
    core/src/resultdata.cpp \
    core/src/cmdhistory.cpp \
    core/src/calculalte.cpp \
    core/src/icalcdisplay.cpp \
    core/src/gloable.cpp

HEADERS  += calmain.h \
    core/inc/calculalte.h \
    core/inc/resultdata.h \
    core/inc/cmdhistory.h \
    core/inc/Command.h \
    core/inc/icalcdisplay.h \
    core/inc/gloable.h

INCLUDEPATH += core/inc

FORMS    += calmain.ui

DISTFILES += \
    readme

RESOURCES += \
    style.qrc \
    images.qrc
