#include "walls.h"
#include "horisontalline.h"
#include "verticalline.h"

using namespace std;

Walls::Walls(int mapwight, int mapheight)
{
    // отрисовка рамочки
    HorisontalLine upLine(0, mapwight-2, 0, '+');
    HorisontalLine downLine(0, mapwight-2, mapheight-1, '+');
    VerticalLine leftLine(0, mapheight-1, 0, '+');
    VerticalLine rightLine(0, mapheight-1, mapwight-2, '+');

    wallList.push_back(upLine);
    wallList.push_back(downLine);
    wallList.push_back(leftLine);
    wallList.push_back(rightLine);
}

bool Walls::IsHit(Figure figure)
{
    for( int i = 0; i < wallList.size(); i++){
        Figure wall = wallList[i];
        if(wall.IsHit(figure))
            return true;
    }
    return false;
}

void Walls::Draw()
{
    for(int i = 0; i < wallList.size(); i++){
        Figure wall = wallList[i];
        wall.Draw();
    }
}
