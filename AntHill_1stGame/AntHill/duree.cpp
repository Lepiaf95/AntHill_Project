#include "duree.h"
#include "map.h"
#include "game.h"

Duree::Duree(Map *map, Game *game, QGraphicsItem *parent) : QGraphicsTextItem(parent), game(game), m_duree(0)
{
    map->addItem(this);
    // On écrit le text avec son nombre de secondes et on lui ajoute une couleur ainsi qu'une forme et une taille
    setPlainText(QString("Time: ") + QString::number(m_duree) + QString("s"));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",18));

    // On le positionne sur la map
    setPos(map->getwidth()/2-boundingRect().width()/2,0);

    QTimer *temps = new QTimer();
    connect(temps,SIGNAL(timeout()),this,SLOT(increase()));
    temps->start(1000);
}


// La Durée du jeu augmente de secondes en secondes jusqu'au gameWin();
void Duree::increase(){
    m_duree++;
    setPlainText(QString("Time: ") + QString::number(m_duree) + QString("s"));
    if(m_duree == 200)
        game->gameOver("GG ! You win ! :D","background-color: yellow;", "Game Win !");
}

Duree::~Duree(){

}
