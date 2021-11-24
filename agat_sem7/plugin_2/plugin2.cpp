#include "plugin2.hpp"

#include <QDebug>
#include <QMenu>

Plugin2::Plugin2() {}

void Plugin2::menuSelected() { qDebug() << "Menu selected action"; }

QMenu* Plugin2::setup(QFrame* dataInputFrame, MapWidget* map) {
    QMenu*   menu   = new QMenu("Задача 2");
    QAction* action = new QAction("Запуск", menu);
    QAction* action2 = new QAction("Сброс", menu);
    menu->addAction(action);
    menu->addAction(action2);

    connect(action, &QAction::triggered, this, &Plugin2::menuSelected);

    return menu;
}

void Plugin2::tick() {}
