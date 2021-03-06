/*************************************************************************
 *
 * Discription : QML cpp integration
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include "triangleitem.h"

#include <QSGGeometryNode>

TriangleItem::TriangleItem(QQuickItem *parent)
    : QQuickItem(parent),
      m_geometry(QSGGeometry::defaultAttributes_Point2D(), 3)
{
    setFlag(ItemHasContents);
    m_material.setColor(Qt::red);
}

QSGNode *TriangleItem::updatePaintNode(QSGNode *n, UpdatePaintNodeData *)
{
    QSGGeometryNode *node = static_cast<QSGGeometryNode *>(n);
    if (!node) {
        node = new QSGGeometryNode();
    }

    QSGGeometry::Point2D *v = m_geometry.vertexDataAsPoint2D();
    const QRectF rect = boundingRect();
    v[0].x = rect.left();
    v[0].y = rect.bottom();

    v[1].x = rect.left() + rect.width()/2;
    v[1].y = rect.top();

    v[2].x = rect.right();
    v[2].y = rect.bottom();

    node->setGeometry(&m_geometry);
    node->setMaterial(&m_material);

    return node;
}

