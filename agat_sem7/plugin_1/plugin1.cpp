#include "plugin1.hpp"

#include <QDebug>
#include <QMenu>
#include <QGraphicsScene>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QLabel>
#include "mapwidget.hpp"
#include "action.h"
#include "mapwidget.hpp"
Plugin1::Plugin1() {}

void Plugin1::menuSelected() {

    qDebug() << "Menu selected action";
}

QMenu* Plugin1::setup(QFrame* dataInputFrame, MapWidget* map) {
    QMenu*   menu   = new QMenu("Задача 1");
    QAction* action = new QAction("Запуск", menu);
    QAction* action2 = new QAction("Сброс", menu);
    menu->addAction(action);
    menu->addAction(action2);

    connect(action, &QAction::triggered, this, &Plugin1::menuSelected);

    return menu;
}

void Plugin1::tick() {}
