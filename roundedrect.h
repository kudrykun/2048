#ifndef ROUNDEDRECT_H
#define ROUNDEDRECT_H

#include <QGraphicsItem>
#include <QPen>
#include <QBrush>
class RoundedRect : public QGraphicsItem
{
public:
    RoundedRect(qreal x, qreal y, qreal w, qreal h, qreal r, const QPen &pen, const QBrush &brush);
    QRectF boundingRect() const;
    void paint(QPainter *painter,
                              const QStyleOptionGraphicsItem *option,
                              QWidget *widget);
private:
    qreal x;
    qreal y;
    qreal w;
    qreal h;
    qreal r;
    QPen pen;
    QBrush brush;
};

#endif // ROUNDEDRECT_H
