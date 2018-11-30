#ifndef BOUTTON_H
#define BOUTTON_H
#include <QPushButton>

class Map;

class Boutton : public QPushButton
{

public:
    Boutton(Map *map, QString txt, QString style, int position_x, int position_y, int x, int y);
};

#endif // BOUTTON_H
//invocationIdefix->setGeometry(this->width()-100,1,100,30);


