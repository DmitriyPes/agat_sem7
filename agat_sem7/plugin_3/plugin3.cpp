#include "plugin3.hpp"

#include <QDebug>
#include <QMenu>

Plugin3::Plugin3() {}

void Plugin3::menuSelected() { qDebug() << "Menu selected action"; }

QMenu* Plugin3::setup(QFrame* dataInputFrame, MapWidget* map) {
    QMenu*   menu   = new QMenu("Задача 3");
    QAction* action = new QAction("Запуск", menu);
    QAction* action2 = new QAction("Сброс", menu);
    menu->addAction(action);
    menu->addAction(action2);
    connect(action, &QAction::triggered, this, &Plugin3::menuSelected);

    return menu;
}

void Plugin3::tick() {}
