#ifndef ENNEMY_H
#define ENNEMY_H

#include "elements.h"
#include <QObject>

class Map;


// Tous les ennemy des gaulois : Légionnaires, Décurion, Centurion, César

class Ennemy : public QObject, public Element
{
     Q_OBJECT
public :
    Ennemy(Map *map, int hp, int hpMax, int str, int vit, int lck, int esq, QString nom, QObject *parent = NULL);
        void collision();
            ~Ennemy();
public slots :
    void moveNord();
    void moveSud();
    void moveOuest();
    void moveEst();
};



class Legionnaire : public Ennemy
{
    Q_OBJECT
public:
    Legionnaire(Map *map);
            ~Legionnaire();
};


class Decurion : public Ennemy
{
    Q_OBJECT
public:
    Decurion(Map *map);
            ~Decurion();
};


class Centurion : public Ennemy
{
    Q_OBJECT
public:
    Centurion(Map *map);
            ~Centurion();
};


class Cesar : public Ennemy
{
    Q_OBJECT
public:
    Cesar(Map *map);
            ~Cesar();
};


#endif // ENNEMY_H
