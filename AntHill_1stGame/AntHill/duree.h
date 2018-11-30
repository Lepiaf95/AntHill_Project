#ifndef DUREE_H
#define DUREE_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QTimer>
#include <QObject>
#include <QTimer>

class Map;
class Game;

class Duree : public QGraphicsTextItem
{
    Q_OBJECT
private:
    Game *game;
    int m_duree;
public:
    Duree(Map *map, Game *game, QGraphicsItem *parent=0);
        inline int getDuree() const { return m_duree; }
            ~Duree();
public slots:
        void increase();
};

#endif // DUREE_H
