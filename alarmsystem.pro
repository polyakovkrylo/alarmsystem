TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    alarmcomponent.cpp \
    alarmcomponentgroup.cpp \
    alarmstrategy.cpp \
    alarmstrategyowner.cpp \
    alarmsensor.cpp \
    callpolice.cpp \
    callfiremen.cpp

DISTFILES += \
    README.md

HEADERS += \
    alarmcomponent.h \
    alarmcomponentgroup.h \
    alarmstrategy.h \
    alarmstrategyowner.h \
    alarmsensor.h \
    callpolice.h \
    callfiremen.h
