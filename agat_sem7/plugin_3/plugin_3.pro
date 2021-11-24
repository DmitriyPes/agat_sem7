TEMPLATE        = lib
CONFIG         += plugin
QT             += widgets
INCLUDEPATH    += ../main_window
TARGET          = plugin3

INSTALLS += target
DESTDIR =  $$PWD/..

HEADERS += plugin3.hpp
SOURCES += plugin3.cpp

CONFIG += install_ok
