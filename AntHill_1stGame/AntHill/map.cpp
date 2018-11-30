#include "map.h"

#include <QPushButton>

Map::Map(int hlth, QWidget *parent) : QGraphicsView(parent)
{
    // Partie View
    // Creation de la Scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,500); // On modifie la taille de la scene (qui est infinie par défault)
    // On ajoute une image de fond d'écran qui fait la taille de la scene
    setBackgroundBrush(QBrush(QImage(":/Images/VILLAGE.jpg")
                              .scaled(scene->width(), scene->height(), Qt::IgnoreAspectRatio, Qt::FastTransformation)));

    // Mise en place de la scene dans la Map (qui est la view)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //empeche la fenetre de s'agrandir horrizontalement à l'infini
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // idem avec la verticale
    setFixedSize(800,500); // Map.largeur/hauteur = Scene.largeur/hauteur
    setDragMode(QGraphicsView::RubberBandDrag);
    // Sert à sélectionner plusieurs QGraphicsItem::ItemIsSelectable (donc nos gaulois) en même temps

//-----------------------------------------------------------------------------------------------------------------

    // Partie Contrôlleur

    // 1) Le model
    Game *play = new Game(this);

    // Spawn des Elements dans la Scene :

    // 2) Le village
    QTimer::singleShot(1,play,SLOT(spawnHill()));

    // 3) La nourriture
    QTimer::singleShot(500,play,SLOT(spawnFood()));
    QTimer * timerFood = new QTimer();
    QObject::connect(timerFood,SIGNAL(timeout()),play,SLOT(spawnFood()));
    timerFood->start(30000);


    // 4) Les Ennemy
    QTimer * timerLegionnaire = new QTimer();
    QObject::connect(timerLegionnaire,SIGNAL(timeout()),play,SLOT(spawnLegionnaire()));
    timerLegionnaire->start(10000);

    QTimer * timerDecurion = new QTimer();
    QObject::connect(timerDecurion,SIGNAL(timeout()),play,SLOT(spawnDecurion()));
    timerDecurion->start(30000);

    QTimer * timerCenturion = new QTimer();
    QObject::connect(timerCenturion,SIGNAL(timeout()),play,SLOT(spawnCenturion()));
    timerCenturion->start(45000);

    QTimer * timerCesar = new QTimer();
    QObject::connect(timerCesar,SIGNAL(timeout()),play,SLOT(spawnCesar()));
    timerCesar->start(60000);


    // 5) Bouttons d'invocation de nos Gaulois
    invocationIdefix = new Boutton(this,"Idefix 50g","background-color: white;",this->width()-100,1,100,30);
    QPushButton::connect(invocationIdefix,SIGNAL(clicked()),play,SLOT(spawnIdefix()));

    invocationObelix = new Boutton(this,"Obelix 250g","background-color: lightBlue;",this->width()-100,30,100,30);
    QPushButton::connect(invocationObelix,SIGNAL(clicked()),play,SLOT(spawnObelix()));

    invocationAsterix = new Boutton(this,"Asterix 500g","background-color: yellow;",this->width()-100,60,100,30);
    QPushButton::connect(invocationAsterix,SIGNAL(clicked()),play,SLOT(spawnAsterix()));


    // 6) La Health en fonction de la difficulté du mode choisis par le joueur
    health = new Health(this,play,hlth);

    // 7) La Durée
    duree = new Duree(this,play);

    // 8) L'argent
    gold = new Gold(this);


    // 9) La music
    QTimer *musicTimer = new QTimer();
    QTimer::singleShot(500,play,SLOT(musique()));
    QObject::connect(musicTimer, SIGNAL(timeout()),play,SLOT(musique()));
    musicTimer->start(90000);


    show(); // La scene devient visible
}

Map::~Map(){

}
