#include "boutton.h"
#include "map.h"

Boutton::Boutton(Map *map, QString txt, QString style, int position_x, int position_y, int x, int y)
{
    setText(txt);
    setStyleSheet(style);
    map->addWidget(this);
    setGeometry(position_x,position_y,x,y);
}
