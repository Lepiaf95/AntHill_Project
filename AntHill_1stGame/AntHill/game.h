#ifndef GAME_H
#define GAME_H

#include "elements.h"
#include "food.h"
#include "ennemy.h"
#include "map.h"
#include "gaulois.h"

#include <QObject>
#include <QGraphicsScene>
#include <QDebug>
#include <QTimer>
#include <QVector>
#include <QMediaPlayer>

// Ma class Game correspond à mon Model

// La classe Game fait apparaitre les ennemy, la food, les gaulois, ...

class Game : public QObject
{
    Q_OBJECT
private:
    int f = 0, fmax = 10;
    int e = 0, emax = 10;
    Map *map;
    QMediaPlayer * music = new QMediaPlayer();
    // Création de nos listes de Food, Ennemy et Gaulois
    QVector<Food *> food;
    QVector<Ennemy *> ennemy;
    QVector<Gaulois *> gaulois;
    QVector<Hill *> village;

public:
    Game(Map *map);
        void startGame();
        void gameOver(QString text, QString style, QString text2);
            ~Game();

public slots:
    void spawnHill();
    void spawnFood();
    void spawnLegionnaire();
    void spawnDecurion();
    void spawnCenturion();
    void spawnCesar();
    void spawnIdefix();
    void spawnObelix();
    void spawnAsterix();
    void musique();
};

#endif // GAME_H
