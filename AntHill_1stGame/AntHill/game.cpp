#include "game.h"
#include "menu_anthill.h"

Game::Game(Map *map): map(map) {

}

void Game::startGame(){ // Création de notre première partie
    QMessageBox msgBox;
    msgBox.setStyleSheet("background-color: yellow;");
    msgBox.setText("Mode de jeu");
    msgBox.setInformativeText("Quel mode voulez vous ?");
    QPushButton *facile = msgBox.addButton(tr("Facile(100pv)"), QMessageBox::ActionRole);
    facile->setStyleSheet("background-color: lightGreen;");
    QPushButton *difficile = msgBox.addButton(tr("Difficile(50pv)"), QMessageBox::ActionRole);
    difficile->setStyleSheet("background-color: orange;");
    QPushButton *extreme = msgBox.addButton(tr("Extreme(10pv)"), QMessageBox::ActionRole);
    extreme->setStyleSheet("background-color: red;");
    msgBox.exec();

    if(msgBox.clickedButton() == facile){
        msgBox.close();
        new Map(100); // On recréé une nouvelle partie avec 100 pv pour le joueur
    }
    else if(msgBox.clickedButton() == difficile){
        msgBox.close();
        new Map(50); // On recréé une nouvelle partie avec 50 pv pour le joueur
    }
    else if(msgBox.clickedButton() == extreme){
        msgBox.close();
        new Map(10); // On recréé une nouvelle partie avec 10 pv pour le joueur
    }
}

// -----------------------------------------------------------------


void Game::spawnHill(){
    village << new Hill(map);
}


void Game::spawnFood(){
    // création de la food
    f=0; // On réinitialise la variable à 0
    do{
        food << new Food(map); // On ajoute une food à notre liste de food
        f++;
    }while (f < fmax);
}


void Game::spawnLegionnaire(){
    // création des ennemy
    e=0; // On réinitialise la variable à 0
    do{
        ennemy << new Legionnaire(map); // On ajoute un Légionnaire à notre liste d'ennemy
        e++;
    }while(e < emax);
}

void Game::spawnDecurion(){
    // création des ennemy
    e=0; // On réinitialise la variable à 0
    do{
        ennemy << new Decurion(map); // On ajoute un Décurion à notre liste d'ennemy
        e++;
    }while(e < emax/2);
}

void Game::spawnCenturion(){
    // création des ennemy
    e=0; // On réinitialise la variable à 0
    do{
        ennemy << new Centurion(map); // On ajoute un Centurion à notre liste d'ennemy
        e++;
    }while(e < emax/3);
}

void Game::spawnCesar(){
    // création des ennemy
    e=0; // On réinitialise la variable à 0
    do{
        ennemy << new Cesar(map); // On ajoute un Cesar à notre liste d'ennemy
        e++;
    }while(e < emax/4);
}


// ----------------------


void Game::spawnIdefix(){
    // invocation des gaulois
    e=0;
    Idefix idefix(map);
    if(map->getCurrentGold() >= idefix.getPriceGaulois())
    {
        do{
            gaulois << new Idefix(map); // On ajoute un Idefix à notre liste de gaulois
            e++;
          }while(e < emax);
        map->decreaseGoldIdefix();
    }
}

void Game::spawnObelix(){
    // invocation des gaulois
    e=0;
    Obelix obelix(map);
    if(map->getCurrentGold() >= obelix.getPriceGaulois())
    {
        do{
            gaulois << new Obelix(map); // On ajoute un Obelix à notre liste de gaulois
            e++;
           }while(e<emax/2);
        map->decreaseGoldObelix();
    }
}

void Game::spawnAsterix(){
    // invocation des gaulois
    Asterix asterix(map);
    if(map->getCurrentGold() >= asterix.getPriceGaulois())
    {
        gaulois << new Asterix(map); // On ajoute un Asterix à notre liste de gaulois
        map->decreaseGoldAsterix();
    }
}

// La fonction qui lance et relance la musique du background en continue
void Game::musique(){
    music->setMedia(QUrl("qrc:/Music/Asterix.mp3"));
    music->play();
}


// -------------------------------------------------------------------------

void Game::gameOver(QString text, QString style, QString text2){
    map->close(); // On ferme la map
    music->stop(); // On arrete la musique
    delete this; // On delete la game actuelle
    QMessageBox msgBox;
    msgBox.setText(text);
    msgBox.setStyleSheet(style);
    msgBox.setInformativeText("Do you want to try another game ?");
    QPushButton *replay = msgBox.addButton(tr("Replay"), QMessageBox::ActionRole);
    replay->setStyleSheet("background-color: red;");
    QPushButton *quit = msgBox.addButton(tr("Quit"), QMessageBox::ActionRole);
    quit->setStyleSheet("background-color: lightGreen;");
    msgBox.exec();

    if(msgBox.clickedButton() == replay){
        msgBox.close();
        startGame(); // On recréé une nouvelle partie
    }
    else if(msgBox.clickedButton() == quit){
        msgBox.close();
        QMessageBox msgBox2;
        msgBox2.setText(text2);
        msgBox2.setStyleSheet("background-color: lightGreen;");
        msgBox2.setInformativeText("Bye Bye !");
        msgBox2.exec(); // On quitte définitivement le jeu
    }
}

Game::~Game(){

}
