TEMPLATE        = lib
CONFIG         += plugin
QT             += widgets
INCLUDEPATH    += ../main_window
TARGET          = plugin

INSTALLS += target
DESTDIR =  $$PWD/..

HEADERS += plugin1.hpp
SOURCES += plugin1.cpp

CONFIG += install_ok
