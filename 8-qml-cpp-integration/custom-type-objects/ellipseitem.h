/*************************************************************************
 *
 * Discription : QML cpp integration
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/
#ifndef ELLIPSEITEM_H
#define ELLIPSEITEM_H

#include <QQuickPaintedItem>
#include "style.h"

class EllipseItem : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(Style *style READ style WRITE setStyle NOTIFY styleChanged)

public:
    EllipseItem(QQuickItem *parent = 0);
    void paint(QPainter *painter);

    Style *style() const;
    void setStyle(Style *newStyle);

signals:
    void styleChanged();

private:
    Style *m_style;
};

#endif
