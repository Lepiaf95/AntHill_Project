#include "gaulois.h"
#include "map.h"

// Gaulois

Gaulois:: Gaulois(Map *map, int hp, int hpMax, int str, int vit, int lck, int esq, QString nom, int price) : Element(map, hp, hpMax, str, vit, lck, esq, nom), m_price(price)
{
    setFlag(QGraphicsItem::ItemIsFocusable); // On rend l'objet Gaulois focusable
    setFlag(QGraphicsItem::ItemIsSelectable); // On rend l'objet Gaulois selectable sur la view
    setPos(map->getwidth()/2 - this->pixmap().width()/2,map->getheight()/2 - this->pixmap().height()/2);
}

void Gaulois::collision(){
    // Faire une liste de tous les items que rencontrent les gaulois
    QList<QGraphicsItem *> collision = collidingItems();
    for (int i = 0, n = collision.size(); i < n; ++i){
            if (dynamic_cast<Food*>(collision[i]))
            { // si un gaulois rencontre une food alors...
                attack(dynamic_cast<Food*>(collision[i])); // Le gaulois attaque la food
                return;
            }
    }
}

// Fonction déplacement de nos gaulois
void Gaulois::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Left){
        setPos(x()-10,y());
        collision();
    }
    else if (event->key() == Qt::Key_Right){
        setPos(x()+10,y());
        collision();
    }
    else if (event->key() == Qt::Key_Up){
        setPos(x(),y()-10);
        collision();
    }
    else if (event->key() == Qt::Key_Down){
        setPos(x(),y()+10);
        collision();
    }
}

Gaulois::~Gaulois(){

}


// Les class Filles de Gaulois

Idefix::Idefix(Map *map) : Gaulois(map, 100, 100, 100, rand()%51, rand()%51, rand()%51, "Idéfix", 50)
{
    // attribution d'une vitesse, d'une chance et d'une  esquive aléatoire entre 0 et 50
    // Insertion et modification de la taille de l'image
    setPixmap(QPixmap(":/Images/Idefix.png")
              .scaled(50, 50, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    // On perd de quelques pixels leur position par rapport à la class Gaulois. Il faut donc les repositionner correctement
    setPos(map->getwidth()/2 - this->pixmap().width()/2,map->getheight()/2 - this->pixmap().height()/2);
}

Idefix::~Idefix(){

}


Obelix::Obelix(Map *map) : Gaulois(map, 250, 250, 250, rand() % 51 +25, rand() % 51 +25, rand() % 51 +25, "Obelix", 250)
{
    // attribution d'une vitesse, d'une chance et d'une esquive aléatoire entre 25 et 75
    // Insertion et modification de la taille de l'image
    setPixmap(QPixmap(":/Images/Obelix.gif")
              .scaled(50, 50, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    // On perd de quelques pixels leur position par rapport à la class Gaulois. Il faut donc les repositionner correctement
    setPos(map->getwidth()/2 - this->pixmap().width()/2,map->getheight()/2 - this->pixmap().height()/2);
}

Obelix::~Obelix(){

}


Asterix::Asterix(Map *map) : Gaulois(map, 500, 500, 500, rand() %50 +50, rand() %50 +50, rand() %50 +50, "Asterix", 500)
{
    // attribution d'une vitesse, d'une chance et d'une esquive aléatoire entre 50 et 99
    // Insertion et modification de la taille de l'image
    setPixmap(QPixmap(":/Images/Asterix.gif")
              .scaled(50, 50, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    // On perd de quelques pixels leur position par rapport à la class Gaulois. Il faut donc les repositionner correctement
    setPos(map->getwidth()/2 - this->pixmap().width()/2,map->getheight()/2 - this->pixmap().height()/2);
}

Asterix::~Asterix(){

}
