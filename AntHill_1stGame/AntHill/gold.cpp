#include "gold.h"
#include "map.h"

Gold::Gold(Map *map, QGraphicsItem *parent) : QGraphicsTextItem(parent), map(map), m_gold(100)
{
    map->addItem(this);
    // On écrit le text avec son nombre de secondes et on lui ajoute une couleur ainsi qu'une forme et une taille
    setPlainText(QString::number(m_gold) + QString("G"));
    setDefaultTextColor(Qt::darkRed);
    setFont(QFont("times",20));

    // On le positionne sur la map
    setPos(0,map->getheight()-this->boundingRect().height());

    QTimer *golld = new QTimer();
    QObject::connect(golld,SIGNAL(timeout()),this,SLOT(increase()));
    golld->start(1000);

}


// La Gold du jeu augmente de 1 de secondes en secondes
void Gold::increase(){
    m_gold++;
    setPlainText(QString::number(m_gold) + QString("G"));
// -----------------------------------------------------------------
    // Pour faire plus jolie et plus pratique dans le gameplay, on cadenasse les boutons d'invocation.
    // Lorsqu'une invocation n'est pas encore possible car le joueur n'a pas suffisemment de gold,
    // alors le bouton se lock (enable(false) et couleur grise)

    Idefix idefix(map);
    Obelix obelix(map);
    Asterix asterix(map);

    if(m_gold >= idefix.getPriceGaulois())
        map->cadenasOpen(map->invocationIdefix, "background-color: white;");
    else
        map->cadenasLock(map->invocationIdefix);

    if(m_gold >= obelix.getPriceGaulois())
        map->cadenasOpen(map->invocationObelix, "background-color: lightBlue;");
    else
        map->cadenasLock(map->invocationObelix);

    if(m_gold >= asterix.getPriceGaulois())
        map->cadenasOpen(map->invocationAsterix, "background-color: yellow;");
    else
        map->cadenasLock(map->invocationAsterix);
}

// Apres avoir tuer un Ennemy ou une Food, la Gold augmente de 20% de ses HP
void Gold::increaseForElement(int argent){
    m_gold+= argent/5; // Gagne 20% de la vie max d'un Element lorsque celui-ci meurt
    setPlainText(QString::number(m_gold) + QString("G"));
}

// Apres avoir fait une invocation, la Gold diminue par le prix de l'invocation
void Gold::invocationIdefix(){
    Idefix idefix(map);
    m_gold-= idefix.getPriceGaulois();
    setPlainText(QString::number(m_gold) + QString("G"));
}

void Gold::invocationObelix(){
    Obelix obelix(map);
    m_gold-= obelix.getPriceGaulois();
    setPlainText(QString::number(m_gold) + QString("G"));
}

void Gold::invocationAsterix(){
    Asterix asterix(map);
    m_gold-= asterix.getPriceGaulois();
    setPlainText(QString::number(m_gold) + QString("G"));
}

Gold::~Gold(){

}
