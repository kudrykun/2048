#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QGraphicsScene>
#include <roundedrect.h>

class GameScene : public QGraphicsScene
{
public:
    explicit GameScene(QObject * parent = 0);
    RoundedRect *addRoundedRect(qreal x, qreal y, qreal w, qreal h, qreal r,
                                  const QPen & pen = QPen(),
                                  const QBrush & brush = QBrush());
};

#endif // GAMESCENE_H
