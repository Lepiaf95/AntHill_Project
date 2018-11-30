#ifndef MENU_ANTHILL_H
#define MENU_ANTHILL_H

#include <QMainWindow>
#include <QLabel>
#include <QMessageBox>
#include <QPushButton>
#include <QBrush>
#include <QImage>

#include "game.h"

namespace Ui {
class Menu_anthill;
}

class Menu_anthill : public QMainWindow
{
    Q_OBJECT
public:
    explicit Menu_anthill(QWidget *parent = 0);
    ~Menu_anthill();

private:
    Ui::Menu_anthill *ui;
    QPushButton *playGame;
    QPushButton *exitGame;
    QPushButton *rules;
    Game *game;

public slots:
    void play();
    void exit();
    void rulesToPlay();
};

#endif // MENU_ANTHILL_H
