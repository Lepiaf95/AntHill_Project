#include "health.h"
#include "game.h"
#include "map.h"

// La class Health représente les PV du joueur

Health::Health(Map *map, Game *game, int hlth, QGraphicsItem *parent) : QGraphicsTextItem(parent), game(game), m_hlth(hlth)
{
    map->addItem(this);
    // On initialise la health avec le constructeur de la view (la class Map)
    // On écrit le text avec son nombre de health et on lui ajoute une couleur ainsi qu'une forme et une taille
    setPlainText(QString("Health: ") + QString::number(m_hlth));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));

    // On le positionne sur la map
    setPos(0,0);
}


// Lorsqu'un ennemy arrive à toucher le village, alors le joueur perd un PV jusqu'au gameOver();
void Health::decrease(){
    m_hlth--;
    setPlainText(QString("Health: ") + QString::number(m_hlth));
    if(m_hlth == 0)
        game->gameOver("You loose !! :(","background-color: orange;", "Game Loose !");
}


Health::~Health(){

}

