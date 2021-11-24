QT       += core gui widgets
CONFIG += c++11

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mapwidget.cpp \
    statusbar.cpp \
    action.cpp \
    task1_action.cpp

HEADERS += \
    mainwindow.hpp \
    mapwidget.hpp \
    plugininterface.hpp \
    statusbar.hpp \
    action.h \
    task1_action.h

TARGET = agat_sem7
DESTDIR =  $$PWD/..
