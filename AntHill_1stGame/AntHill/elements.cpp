#include "elements.h"
#include "map.h"

// Elements

Element:: Element (Map *map, int hp, int hpMax, int str, int vit, int lck, int esq, QString nom, QGraphicsItem *parent) : QGraphicsPixmapItem(parent), map(map), m_life(hp), m_lifeMax(hpMax), m_force(str), m_speed(vit), m_luck(lck), m_esquive(esq), m_nom(nom) {
    map->addItem(this);
}

void Element::attack(Element *elmt){
    if(elmt->m_esquive < this->m_esquive)
    // Si l'esquive de la victime est < à la luck de son attaquant alors..
        elmt->recevoirDegat(this->m_force, elmt->m_lifeMax);
    else {
    // Sinon la victime tente une esquive
        if (elmt->m_luck > this->m_luck)
        { // Et si elle réussit, elle contre-attack avec un "coup critique" et se boost
            recevoirDegat(elmt->m_force*2, this->m_lifeMax);
            elmt->m_force += this->m_force/10; // La force de la victime augmente de 10% de la force de son attaquant
        }
        else
        // sinon elle fait une simple contre-attaque^^
            recevoirDegat(elmt->m_force, this->m_lifeMax);
    }
}

void Element::recevoirDegat(int str, int gold){
    this->m_life -= str;
    if (this->m_life <= 0)
    {
        map->increaseGoldElement(gold);
        delete this;
        return;
        // on a besoin du return sinon il y a un bug entre la disparition de l'ennemy et le fait qu'il doit encore se déplacer
    }
}

Element::~Element(){

}


// Hill : Le village d'Astérix

Hill:: Hill(Map *map) :  Element(map, 1, 1, 0, 0, 0, 0, "Village")
{
    // Insertion et modification de la taille de l'image
    setPixmap(QPixmap(":/Images/Village.jpeg")
              .scaled(120, 120, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    // positon du village au milieu de la map
    setPos(map->getwidth()/2 - this->pixmap().width()/2,map->getheight()/2 - this->pixmap().height()/2);
}

Hill::~Hill(){

}
