/*************************************************************************
 *
 * Discription : QML cpp integration
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/
#include <QGuiApplication>
#include <QQuickView>
#include "ellipseitem.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<EllipseItem>("Shapes", 6, 0, "Ellipse");

    QQuickView view;
    view.setSource(QUrl("qrc:///ellipse6.qml"));
    view.show();
    return app.exec();
}
