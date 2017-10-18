TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    alarmcomponent.cpp \
    alarmcomponentgroup.cpp

DISTFILES += \
    README.md

HEADERS += \
    alarmcomponent.h \
    alarmcomponentgroup.h
