#include "mainwindow.hpp"

#include "exampleaction.hpp"
#include <QApplication>

#include <iostream>


void messageHandler(
    QtMsgType                 type [[maybe_unused]],
    const QMessageLogContext& context [[maybe_unused]],
    const QString&            msg) {
    std::cout << qUtf8Printable(msg) << std::endl;
}


int main(int argc, char* argv[]) {
    qInstallMessageHandler(messageHandler);

    QApplication a(argc, argv);
    MainWindow   w;
    w.resize(600, 800);
    w.addActionBuilder(new ExampleAction());

    w.show();
    return a.exec();
}
