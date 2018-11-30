#include "food.h"
#include "map.h"

// Food

Food:: Food(Map *map) : Element(map, 100, 100, 0, 0, 0, 0, "Sanglier")
{
    // Insertion et modification de la taille de l'image
    setPixmap(QPixmap(":/Images/Sanglier.gif")
              .scaled(25, 25, Qt::IgnoreAspectRatio, Qt::FastTransformation));

    int random_x = rand() % map->getwidth() - this->pixmap().width();
    int random_y = rand() % map->getheight() - this->pixmap().height();

    // Faire une liste de toutes les positions de la map
    QList<QGraphicsItem *> position = collidingItems();
    for (int i = 0, n = position.size(); i < n; ++i){
        if (dynamic_cast<Hill*>(position[i])){ // si une Food possède la meme position que la Hill (le village) alors...
                delete this;
                new Food(map);
             }

        else { // sinon on la positionne aux coordonnées données.
                setPos(random_x, random_y);
             }
    }
}


Food::~Food(){

}
