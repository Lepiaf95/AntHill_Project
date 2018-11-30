#ifndef FOOD_H
#define FOOD_H

#include "elements.h"

class Map;

// La nourriture des Gaulois

class Food : public Element
{
public :
    Food(Map *map);
        void removeFood();
            ~Food();
};


#endif // FOOD_H
