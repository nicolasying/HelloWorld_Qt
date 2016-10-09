#-------------------------------------------------
#
# Project created by QtCreator 2016-09-29T11:16:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Helloworld
TEMPLATE = app


SOURCES += main.cpp\
        hellodialog.cpp

HEADERS  += hellodialog.h

FORMS    += hellodialog.ui

DISTFILES += \
    Nicolas.icns \
    Info.plist

ICON = Nicolas.icns

QMAKE_INFO_PLIST += Info.plist
