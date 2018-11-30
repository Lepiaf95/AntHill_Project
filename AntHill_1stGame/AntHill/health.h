#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QTimer>

class Map;
class Game;

class Health : public QGraphicsTextItem
{
private:
    Game *game;
    int m_hlth;
public:
    Health(Map *map, Game *game, int hlth, QGraphicsItem *parent=0);
        inline int getHealth() const { return m_hlth; }
        void decrease();
            ~Health();
};

#endif // HEALTH_H
