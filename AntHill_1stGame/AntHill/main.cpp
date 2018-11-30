#include <QApplication>
#include <stdlib.h>
#include "menu_anthill.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    srand((unsigned int)time(NULL));
    Menu_anthill M;
    M.show();
    return a.exec();
}
