#ifndef GAULOIS_H
#define GAULOIS_H

#include "elements.h"

// Tous les gaulois : Idéfix, Obélix et Astérix

class Gaulois : public Element
{
private :
    int m_price;
public :
   Gaulois(Map *map, int hp, int hpMax, int str, int vit, int lck, int esq, QString nom, int price);
       inline int getPriceGaulois() const { return m_price; }
       void collision();
       void keyPressEvent(QKeyEvent * event);
            ~Gaulois();
};


class Idefix : public Gaulois
{
public:
    Idefix(Map *map);
            ~Idefix();
};


class Obelix : public Gaulois
{
public:
    Obelix(Map *map);
            ~Obelix();
};


class Asterix : public Gaulois
{
public:
    Asterix(Map *map);
            ~Asterix();
};


#endif // GAULOIS_H
