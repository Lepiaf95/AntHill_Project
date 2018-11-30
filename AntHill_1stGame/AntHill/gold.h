#ifndef GOLD_H
#define GOLD_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QTimer>

class Map;

class Gold : public QGraphicsTextItem
{
    Q_OBJECT
private:
    Map *map;
    int m_gold;
public:
    Gold(Map *map, QGraphicsItem *parent=0);
        inline int getGold() const { return m_gold; }
        void increaseForElement(int argent);
        void invocationIdefix();
        void invocationObelix();
        void invocationAsterix();
            ~Gold();
public slots:
        void increase();
};

#endif // GOLD_H
