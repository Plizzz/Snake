#include"figure.h"
#ifndef WALLS_H
#define WALLS_H

using namespace std;

class Walls
{
private:
    vector<Figure> wallList;

public:
    Walls(int mapwight, int mapheight);
    void Draw();
    bool IsHit( Figure figure);
};

#endif // WALLS_H
