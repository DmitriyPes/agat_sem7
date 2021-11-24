#include "action.h"
#include "mainwindow.hpp"
#include <QFrame>

Action::Action(QString _name)
    : map(new MapWidget())
    , dataInputFrame(new QFrame())
    , actionName(_name)
//  ,
{}
Action::Action() {}
void Action::fillWidgets(MapWidget*& _map, QFrame*& _dataInputFrame) {
    _map            = this->map;
    _dataInputFrame = this->dataInputFrame;
}

const QString& Action::getActionName() const { return actionName; }
