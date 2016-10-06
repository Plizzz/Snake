#include "verticalline.h"

using namespace std;

VerticalLine::VerticalLine(int yUp, int yDown, int x, char s)   // добавление элемента
{
    for( int y = yUp; y <= yDown; y++){
        Point p(x, y, s);
        pVec.push_back(p);
    }
    for(int i = 0; i < pVec.size(); i++){
        Point p = pVec[i];
        p.Draw();
    }
}
