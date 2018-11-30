#ifndef ELEMENTS_H
#define ELEMENTS_H

#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QList>
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QTimer>

class Map;

// Ce fichier contient la class Mere : "Elements", & la class Village : "Hill"

class Element : public QGraphicsPixmapItem
{
protected:
    Map *map;
    int m_life;
    int m_lifeMax;
    int m_force;
    int m_speed;
    int m_luck;
    int m_esquive;
    QString m_nom;
public:
    Element(Map *map, int hp, int hpMax, int str, int vit, int lck, int esq, QString nom, QGraphicsItem *parent=0);
        inline int getLife() const { return m_life; }
        inline int getStr() const { return m_force; }
        inline int getLifeMax() const { return m_lifeMax; }
        inline int getSpeed() const { return m_speed; }
        inline int getLuck() const { return m_luck; }
        inline int getEsquive() const { return m_esquive; }
        inline QString getNom() const { return m_nom; }
        void attack(Element *elmt);
        void recevoirDegat(int str, int gold);
            ~Element();
};


// C'est le village : point de départ des gaulois
class Hill : public Element
{
public :
   Hill(Map *map);
       ~Hill();
};

#endif // ELEMENTS_H
