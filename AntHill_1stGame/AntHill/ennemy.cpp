#include "ennemy.h"
#include "map.h"

// Ennemy

Ennemy::Ennemy(Map *map, int hp, int hpMax, int str, int vit, int lck, int esq, QString nom, QObject *parent): QObject(parent), Element(map, hp, hpMax, str, vit, lck, esq, nom)
  {
        int random_PointCardinaux = rand() % 4;
        int random_apparition;
        switch (random_PointCardinaux)
        {
        // Nord
            case 0:
            {
                random_apparition = rand() % map->getwidth() - this->pixmap().width()/2;
                setPos(random_apparition, 0);
                QTimer *nord = new QTimer(this);
                connect(nord,SIGNAL(timeout()),this,SLOT(moveSud()));
                nord->start(100);
                break;
            }
        // Sud
            case 1:
            {
                random_apparition = rand() % map->getwidth() - this->pixmap().width()/2;
                setPos(random_apparition, map->getheight() - this->pixmap().height());
                QTimer *sud = new QTimer(this);
                connect(sud,SIGNAL(timeout()),this,SLOT(moveNord()));
                sud->start(100);
                break;
            }
        // Ouest
            case 2:
            {
                random_apparition = rand() % map->getheight() - this->pixmap().height()/2;
                setPos(0, random_apparition);
                QTimer *ouest = new QTimer(this);
                connect(ouest,SIGNAL(timeout()),this,SLOT(moveEst()));
                ouest->start(100);
                break;
             }
        // Est
            case 3:
            {
                random_apparition = rand() % map->getheight() - this->pixmap().height()/2;
                setPos(map->getwidth() - this->pixmap().width(), random_apparition);
                QTimer *est = new QTimer(this);
                connect(est,SIGNAL(timeout()),this,SLOT(moveOuest()));
                est->start(100);
                break;
            }
        }
}


Ennemy::~Ennemy(){

}


void Ennemy::collision(){
    // Faire une liste de tous les items que rencontrent les ennemys
    QList<QGraphicsItem *> collision = collidingItems();
    for (int i = 0, n = collision.size(); i < n; ++i){
            if (dynamic_cast<Hill*>(collision[i])) // si un ennemy rencontre le village alors...
            { // L'ennemy attaque le village, fait baisser les PV puis disparait
                map->decreaseHealth();
                delete this;
                return;
                // on a besoin du return sinon il y a un bug entre la disparition de l'ennemy et le fait qu'il doit encore se déplacer
            }

            if (dynamic_cast<Gaulois*>(collision[i])){ // Si un ennemy rencontre un gaulois alors...
                if(dynamic_cast<Gaulois*>(collision[i])->getSpeed() < this->m_speed)
                    // Si l'ennemy a une vitesse plus grande que celle du gaulois...
                    attack(dynamic_cast<Gaulois*>(collision[i])); // Il l'attaque
                else        // Sinon
                    dynamic_cast<Gaulois*>(collision[i])->attack(this); // Le Gaulois l'attaque
                return;
            }
    }
}

void Ennemy::moveSud(){
    // déplace les ennemy vers le Sud
    if(x()<=map->getwidth()/2)
        setPos(x()+1,y()+1);
    else
        setPos(x()-1,y()+1);
    collision();
}

void Ennemy::moveNord(){
    // déplace les ennemy vers le Nord
    if(x()<=map->getwidth()/2)
        setPos(x()+1,y()-1);
    else
        setPos(x()-1,y()-1);
    collision();
}

void Ennemy::moveEst(){
    // déplace les ennemy vers l'Est
    if(y()<=map->getheight()/2)
        setPos(x()+1,y()+1);
    else
        setPos(x()+1,y()-1);
    collision();
}

void Ennemy::moveOuest(){
    // déplace les ennemy vers l'Ouest
    if(y()<=map->getheight()/2)
        setPos(x()-1,y()+1);
    else
        setPos(x()-1,y()-1);
    collision();
}


// Les class Filles de la class Ennemy :

Legionnaire::Legionnaire(Map *map) : Ennemy(map, 100, 100, 100, rand() % 41, rand() % 41, rand() % 41, "Légionnaire")
{
    // attribution d'une vitesse, d'une chance et d'une esquive aléatoire entre 0 et 40
    // Insertion et modification de la taille de l'image
    setPixmap(QPixmap(":/Images/Legionnaire.gif")
              .scaled(50, 50, Qt::IgnoreAspectRatio, Qt::FastTransformation));
}

Legionnaire::~Legionnaire(){

}



Decurion::Decurion(Map *map) : Ennemy(map, 200, 200, 200, rand() % 41 +20, rand() % 41 +20, rand() % 41 +20, "Décurion")
{
    // attribution d'une vitesse, d'une chance et d'une esquive aléatoire entre 20 et 60
    // Insertion et modification de la taille de l'image
    setPixmap(QPixmap(":/Images/Decurion.gif")
              .scaled(50, 50, Qt::IgnoreAspectRatio, Qt::FastTransformation));
}

Decurion::~Decurion(){

}



Centurion::Centurion(Map *map) : Ennemy(map, 250, 250, 250, rand() % 41 +40, rand() % 41 +40, rand() % 41 +40, "Centurion")
{
    // attribution d'une vitesse, d'une chance et d'une esquive aléatoire entre 60 et 80
    // Insertion et modification de la taille de l'image
    setPixmap(QPixmap(":/Images/Centurion.gif")
              .scaled(50, 50, Qt::IgnoreAspectRatio, Qt::FastTransformation));
}

Centurion::~Centurion(){

}



Cesar::Cesar(Map *map) : Ennemy(map, 500, 500, 500, rand() % 40 +60, rand() % 40 +60, rand() % 40 +60, "César")
{
    // attribution d'une vitesse, d'une chance et d'une esquive aléatoire entre 80 et 99
    // Insertion et modification de la taille de l'image
    setPixmap(QPixmap(":/Images/Cesar.gif")
              .scaled(50, 50, Qt::IgnoreAspectRatio, Qt::FastTransformation));
}

Cesar::~Cesar(){

}
