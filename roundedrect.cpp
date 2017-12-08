#include "roundedrect.h"
#include <QPainter>

RoundedRect::RoundedRect(qreal x, qreal y, qreal w, qreal h, qreal r, const QPen &pen, const QBrush &brush)
{
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    this->r = r;
    this->pen = pen;
    this->brush = brush;
    setFlag(QGraphicsItem::ItemIsMovable);
}

QRectF RoundedRect::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(x - penWidth / 2, y - penWidth / 2,
                  w + penWidth, h + penWidth);
}

void RoundedRect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setPen(pen);
    painter->setBrush(brush);
    painter->drawRoundedRect(x, y, w, h, r, r);
}
