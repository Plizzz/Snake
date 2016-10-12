#include "point.h"
#ifndef FOODCREATOR_H
#define FOODCREATOR_H


class Foodcreator
{
private:
    int mapwight;
    int mapheight;
    char sym;
public:
    Foodcreator(int mapwight, int mapheight, char sym);

    Point CreateFood();
};

#endif // FOODCREATOR_H
