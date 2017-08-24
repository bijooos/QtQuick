/*************************************************************************
 *
 * Discription : QML cpp integration
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/
#include <QQuickView>
#include "baritem.h"
#include "chartitem.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<ChartItem>("Shapes", 8, 0, "Chart");
    qmlRegisterType<BarItem>("Shapes", 8, 0, "Bar");

    QQuickView view;
    view.setSource(QUrl("qrc:///chart1.qml"));
    view.show();
    return app.exec();
}
