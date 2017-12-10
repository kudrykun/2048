#include "gamescene.h"
#include <QDebug>

GameScene::GameScene(QObject *parent)
{
    setSceneRect(0,0,700,900);
    setBackgroundBrush(QBrush(QColor(250,248,239))); // set background #faf9ef

    //add "2048" text
    QGraphicsTextItem *text = addText("2048");
    QFont font("Clear Sans", 60, 25);
    text->setFont(font);
    text->setX(95);
    text->setY(100);
    text->setDefaultTextColor(QColor(119,110,101));

    setupField();
    //filling default field
    addRoundedRect(100,250,500,500,6,QPen(Qt::transparent),QBrush(QColor(187,173,160)));
    for(int i = 0; i < field->size(); i++){
        int y = 265 + i * (15 + 106.25);
        for(int j = 0; j < field[0].size(); j++){
            int x = 115 + j * (15 + 106.25);
            addRoundedRect(x,y,106.25,106.25,3,QPen(Qt::transparent),QBrush(QColor(205,192,180)));
        }
    }
}

RoundedRect *GameScene::addRoundedRect(qreal x, qreal y, qreal w, qreal h, qreal r, const QPen &pen, const QBrush &brush)
{
    RoundedRect *rect = new RoundedRect(x,y,w,h,r,pen,brush);
    addItem(rect);
    return rect;
}

void GameScene::keyPressEvent(QKeyEvent *keyEvent)
{
    switch(keyEvent->key()){
    case Qt::Key_Up:
        qDebug() << "Вверх";
        break;
    case Qt::Key_Down:
        qDebug() << "Вниз";
        break;
    case Qt::Key_Left:
        qDebug() << "Влево";
        break;
    case Qt::Key_Right:
        qDebug() << "Вправо";
        break;
    }
}

void GameScene::setupField(int w, int h)
{
    field = new QVector<QVector<int>>(h, QVector<int>(w, 0));
}
