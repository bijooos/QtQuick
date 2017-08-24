/*************************************************************************
 *
 * Discription : QML cpp integration
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#ifndef BARITEM_H
#define BARITEM_H

#include <QColor>
#include <QObject>

class BarItem : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(qreal value READ value WRITE setValue NOTIFY valueChanged)

public:
    BarItem(QObject *parent = 0);

    QColor color() const;
    void setColor(const QColor &newColor);
    qreal value() const;
    void setValue(qreal newValue);

signals:
    void colorChanged();
    void valueChanged();

private:
    QColor m_color;
    qreal m_value;
};

#endif
