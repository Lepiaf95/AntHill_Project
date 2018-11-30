#include "control.h"

Control::Control()
{
    // Creation & Spawn des Elements dans la Scene :

    // 1) La boucle du jeu -> village/gaulois/ennemy/food.spawn
    Game *play = new Game(map);

    // 2) Le village
    QTimer::singleShot(1,play,SLOT(spawnHill()));

    // 3) La nourriture
    QTimer::singleShot(500,play,SLOT(spawnFood()));
    QTimer * timerFood = new QTimer();
    QObject::connect(timerFood,SIGNAL(timeout()),play,SLOT(spawnFood()));
    timerFood->start(20000);


    // 4) Les Ennemy
    QTimer * timerLegionnaire = new QTimer();
    QObject::connect(timerLegionnaire,SIGNAL(timeout()),play,SLOT(spawnLegionnaire()));
    timerLegionnaire->start(10000);

    QTimer * timerDecurion = new QTimer();
    QObject::connect(timerDecurion,SIGNAL(timeout()),play,SLOT(spawnDecurion()));
    timerDecurion->start(20000);

    QTimer * timerCenturion = new QTimer();
    QObject::connect(timerCenturion,SIGNAL(timeout()),play,SLOT(spawnCenturion()));
    timerCenturion->start(30000);

    QTimer * timerCesar = new QTimer();
    QObject::connect(timerCesar,SIGNAL(timeout()),play,SLOT(spawnCesar()));
    timerCesar->start(40000);



    // 5) Invocation de nos Gaulois
    invocationIdefix = new QPushButton();
    invocationIdefix->setText("Idefix");
    scene->addWidget(invocationIdefix);
    invocationIdefix->setGeometry(this->width()-100,1,100,30);
    QPushButton::connect(invocationIdefix,SIGNAL(clicked()),play,SLOT(spawnIdefix()));

    invocationObelix = new QPushButton();
    invocationObelix->setText("Obelix");
    scene->addWidget(invocationObelix);
    invocationObelix->setGeometry(this->width()-100,30,100,30);
    QPushButton::connect(invocationObelix,SIGNAL(clicked()),play,SLOT(spawnObelix()));

    invocationAsterix = new QPushButton();
    invocationAsterix->setText("Asterix");
    scene->addWidget(invocationAsterix);
    invocationAsterix->setGeometry(this->width()-100,60,100,30);
    QPushButton::connect(invocationAsterix,SIGNAL(clicked()),play,SLOT(spawnAsterix()));



    // 6) La Health
    health = new Health(this,play);
    scene->addItem(health);

    // 7) La Durée
    duree = new Duree(this);
    scene->addItem(duree);
    QTimer *temps = new QTimer();
    QObject::connect(temps,SIGNAL(timeout()),play,SLOT(temps()));
    temps->start(1000);

    // 8) L'argent
    gold = new Gold(this);
    scene->addItem(gold);
    QTimer *golld = new QTimer();
    QObject::connect(golld,SIGNAL(timeout()),play,SLOT(argent()));
    golld->start(1000);


    // 9) play background music
    QTimer::singleShot(500,play,SLOT(musique()));
    //musicTimer = new QTimer();
    QObject::connect(musicTimer, SIGNAL(timeout()),play,SLOT(musique()));
    musicTimer->start(90000);


}
