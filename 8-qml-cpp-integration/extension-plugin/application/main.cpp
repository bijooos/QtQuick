/*************************************************************************
 *
 * Discription : QML cpp integration
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/
#include <QGuiApplication>
#include <QDir>
#include <QQmlExtensionPlugin>
#include <QQuickView>
#include <QPluginLoader>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QDir pluginsDir(app.applicationDirPath() + "/plugins");
    foreach (const QString &fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
        QQmlExtensionPlugin *plugin = qobject_cast<QQmlExtensionPlugin *>(loader.instance());
        if (plugin)
            plugin->registerTypes("Shapes");
    }

    QQuickView view;
    view.setSource(QUrl("qrc:///files/ellipse9.qml"));
    view.show();
    return app.exec();
}
