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
    auto button = new QPushButton("Выполнить");
    QLabel *lb1 = new QLabel();
    lb1 -> setText("Поле ввода данных 1:");
    DiF->layout()->addWidget(lb1);
    widgets.push_back(lb1);
    QTextEdit *txt = new QTextEdit();
    DiF->layout()->addWidget(txt);
    widgets.push_back(txt);
    QLabel *lb2 = new QLabel();
    lb2 -> setText("Поле ввода данных 2:");
    DiF->layout()->addWidget(lb2);
    widgets.push_back(lb2);
    QTextEdit *txt1 = new QTextEdit();
    DiF->layout()->addWidget(txt1);
    widgets.push_back(txt1);
    QLabel *lb3 = new QLabel();
    lb3 -> setText("Поле ввода данных 3:");
    DiF->layout()->addWidget(lb3);
    widgets.push_back(lb3);
    QTextEdit *txt2 = new QTextEdit();
    DiF->layout()->addWidget(txt2);
    widgets.push_back(txt2);
    QLabel *lb4 = new QLabel();
    lb4 -> setText("Поле ввода данных 4:");
    DiF->layout()->addWidget(lb4);
    widgets.push_back(lb4);
    QTextEdit *txt3 = new QTextEdit();
    DiF->layout()->addWidget(txt3);
    widgets.push_back(txt3);
    QLabel *lb5 = new QLabel();
    lb5 -> setText("Поле ввода данных 5:");
    DiF->layout()->addWidget(lb5);
    widgets.push_back(lb5);
    QTextEdit *txt4 = new QTextEdit();
    DiF->layout()->addWidget(txt4);
    DiF->layout()->addWidget(button);
    widgets.push_back(txt4);
    widgets.push_back(button);
    QLabel *lb6 = new QLabel();
    lb6 -> setText("Поле вывода данных:");
    DiF->layout()->addWidget(lb6);
    widgets.push_back(lb6);
    QTextEdit *txt5 = new QTextEdit();
    DiF->layout()->addWidget(txt5);
    widgets.push_back(txt5);
}

void Plugin1::clear()
{
    for (auto widget : widgets) {
        delete widget;
    }
    for (auto widget : widgets) {
        widgets.pop_front();
    }
}

QMenu* Plugin1::setup(QFrame* dataInputFrame, MapWidget* map) {
    QMenu*   menu   = new QMenu("Задача 1");
    QAction* action = new QAction("Запуск", menu);
    QAction* action2 = new QAction("Сброс", menu);
    this->DiF = dataInputFrame;
    menu->addAction(action);
    menu->addAction(action2);

    connect(action, &QAction::triggered, this, &Plugin1::menuSelected);
    connect(action2, &QAction::triggered, this, &Plugin1::clear);
    return menu;
}

void Plugin1::tick() {}
