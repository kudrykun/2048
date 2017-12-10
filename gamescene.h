#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QGraphicsScene>
#include <QKeyEvent>
#include <roundedrect.h>

class GameScene : public QGraphicsScene
{
public:
    explicit GameScene(QObject * parent = 0);
    RoundedRect *addRoundedRect(qreal x, qreal y, qreal w, qreal h, qreal r,
                                  const QPen & pen = QPen(),
                                  const QBrush & brush = QBrush());
protected:
    void keyPressEvent(QKeyEvent *keyEvent) override;

private:
    QVector<QVector<int>> *field;
    void setupField(int w = 4, int h = 4);

};

#endif // GAMESCENE_H
