#include "horisontalline.h"

using namespace std;

HorisontalLine::HorisontalLine(int xLeft, int xRight, int y, char s)   // добавление элемента
{
    for( int x = xLeft; x <= xRight; x++){
        Point p(x, y, s);
        pVec.push_back(p);
    }
}

