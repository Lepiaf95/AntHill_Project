#ifndef MAP_H
#define MAP_H

#include "health.h"
#include "elements.h"
#include "gaulois.h"
#include "ennemy.h"
#include "duree.h"
#include "gold.h"
#include "game.h"
#include "boutton.h"

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTimer>
#include <QPushButton>
#include <QBrush>
#include <QImage>

// Ma class map correspond à ma View et à mon Contrôlleur

class Map : public QGraphicsView
{

private:
    QGraphicsScene *scene;
    Health *health;
    Duree *duree;
    Gold *gold;

public:
    Map(int hlth, QWidget * parent = 0);
    // J'ai préféré rajouter un attribut health (hlth) dans le constructeur de la view
    // afin de permettre au joueur de choisir son mode de jeu : facile, difficile ou extreme.

        // On récupère la largeur et hauteur de notre scene
        inline int getwidth() const { return (int)scene->width(); }
        inline int getheight() const { return (int)scene->height(); }

        // Fonction d'ajout d'un object de notre class Element dans notre scene
        inline void addItem(QGraphicsItem *elt) { scene->addItem(elt); }
        inline void addWidget(QPushButton *button) { scene->addWidget(button); }

        // Méthode pour récupérer le nombre d'argent que l'on possède à l'instant t
        inline int getCurrentGold() const { return (int)gold->getGold(); }

        // L'argent du jeu augmente au fil du temps ainsi que lorsque l'on tue un Element
        inline void increaseGoldElement(int money) { gold->increaseForElement(money); }

        // L'argent décroit avec les invocations de nos gaulois
        inline void decreaseGoldIdefix() { gold->invocationIdefix(); }
        inline void decreaseGoldObelix() { gold->invocationObelix(); }
        inline void decreaseGoldAsterix() { gold->invocationAsterix(); }

        // Les PV décroissent si la Hill (village) est touché par un ennemy
        inline void decreaseHealth(){ health->decrease(); }

        // On rend les Bouttons public afin de pouvoir les locks ou les ouvrir plus facilement
        Boutton *invocationIdefix;
        Boutton *invocationObelix;
        Boutton *invocationAsterix;

        inline void cadenasOpen(Boutton *boutton, QString style) { boutton->setStyleSheet(style);
                                      boutton->setEnabled(true); }
        inline void cadenasLock(Boutton *boutton) { boutton->setStyleSheet("background-color: lightGrey;");
                                     boutton->setEnabled(false); }

                 ~Map();
};

#endif // MAP_H
