#include "verticalline.h"

using namespace std;

VerticalLine::VerticalLine(int yUp, int yDown, int x, char s)   // добавление элемента
{
    for( int y = yUp; y <= yDown; y++){
        Point p(x, y, s);
        pVec.push_back(p);
    }
}
