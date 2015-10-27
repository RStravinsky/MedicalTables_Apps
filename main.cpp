#include <QApplication>
#include <QQmlApplicationEngine>
#include <QIcon>
#include <QRect>
#include <QDebug>
#include <QDesktopWidget>
#include "medicaltable.h"
#include <QQmlContext>
#include <QtQml>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    app.setWindowIcon(QIcon("qrc:/images/logo.ico"));
    qmlRegisterType<MedicalTable>("MedicalTableComponent",1,0,"MedicalTable");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
