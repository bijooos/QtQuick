/*************************************************************************
 *
 * Discription : QML cpp integration
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#ifndef ELLIPSEPLUGIN_H
#define ELLIPSEPLUGIN_H

#include <QQmlExtensionPlugin>

class EllipsePlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface/1.0")
    
public:
    void registerTypes(const char *uri);
};

#endif

