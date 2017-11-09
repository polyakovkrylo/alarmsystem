TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    alarm-composite/alarmcomponent.cpp \
    alarm-composite/alarmcomponentgroup.cpp \
    alarm-sensor/abstractsensor.cpp \
    alarm-sensor/smokesensor.cpp \
    alarm-sensor/motionsensor.cpp \
    alarm-sensor/toxicsensor.cpp \
    alarm-strategy/alarmstrategy.cpp \
    alarm-strategy/alarmstrategyowner.cpp \
    alarm-observer/alarmobservable.cpp \
    alarm-observer/alarmobserver.cpp \
    alarm-strategy/waterdispenser.cpp \
    alarm-strategy/alarmsignal.cpp

HEADERS += \
    alarm-composite/alarmcomponent.h \
    alarm-composite/alarmcomponentgroup.h \
    alarm-sensor/abstractsensor.h \
    alarm-sensor/smokesensor.h \
    alarm-sensor/motionsensor.h \
    alarm-sensor/toxicsensor.h \
    alarm-strategy/alarmstrategy.h \
    alarm-strategy/alarmstrategyowner.h \
    alarm-observer/alarmobservable.h \
    alarm-observer/alarmobserver.h \
    alarm-strategy/waterdispenser.h \
    alarm-strategy/alarmsignal.h
