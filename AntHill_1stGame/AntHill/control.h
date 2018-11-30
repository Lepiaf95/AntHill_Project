#ifndef CONTROL_H
#define CONTROL_H

#include "elements.h"
#include "gaulois.h"
#include "health.h"
#include "duree.h"
#include "gold.h"
#include "game.h"
#include "map.h"

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QPushButton>
#include <QDebug>
#include <QMediaPlayer>
#include <QBrush>
#include <QImage>
#include <QList>

class QPushButton;


class Control
{
private:
    Map *map;
    QPushButton *invocationIdefix;
    QPushButton *invocationObelix;
    QPushButton *invocationAsterix;
    Health *health;
    Duree *duree;
    Gold *gold;
    Idefix *idefix;
    Asterix *asterix;
    Obelix *obelix;
    Legionnaire *legionnaire;
    Decurion *decurion;
    Centurion *centurion;
    Cesar *cesar;
    QTimer *musicTimer = new QTimer();

public:
    Control();
};

#endif // CONTROL_H
