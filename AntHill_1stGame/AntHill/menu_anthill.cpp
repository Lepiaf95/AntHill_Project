#include "menu_anthill.h"
#include "ui_menu_anthill.h"


Menu_anthill::Menu_anthill(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu_anthill)
{
    ui->setupUi(this);
    setStyleSheet("background-color: cyan;");

    playGame = new QPushButton(this);
    playGame->setText("Play");
    playGame->setStyleSheet("background-color: red;");
    playGame->setGeometry(250,200,100,100);
    QWidget::connect(playGame,SIGNAL(clicked()),this,SLOT(play()));

    exitGame = new QPushButton(this);
    exitGame->setText("Exit");
    exitGame->setStyleSheet("background-color: lightGreen;");
    exitGame->setGeometry(450,200,100,100);
    QWidget::connect(exitGame,SIGNAL(clicked()),this,SLOT(exit()));

    rules = new QPushButton(this);
    rules->setText("Rules");
    rules->setStyleSheet("background-color: Grey;");
    rules->setGeometry(250,400,300,50);
    QWidget::connect(rules,SIGNAL(clicked()),this,SLOT(rulesToPlay()));
}

void Menu_anthill::play()
{
    game->startGame();
    close();
}


void Menu_anthill::exit()
{
    close();
    setStyleSheet("background-color: lightGrey;");
    QMessageBox::information(this,"", "You have left the game");
}


void Menu_anthill::rulesToPlay()
{
    close();
    setStyleSheet("background-color: lightGrey;");
    QMessageBox::information(this,"", " Règles du jeu : ");
    setStyleSheet("background-color: red;");
    QMessageBox::information(this,"", " 1) Protéger sa base et survivre pendant +3min");
    setStyleSheet("background-color: orange;");
    QMessageBox::information(this,"", " 2) Contrôller le gaulois (que tu focus avec le cursor) avec les touches dirrectionnelles");
    setStyleSheet("background-color: cyan;");
    QMessageBox::information(this,"", " 3) Have Fun ! :D");
    show();
}


Menu_anthill::~Menu_anthill()
{
    delete ui;
}
