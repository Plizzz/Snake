#include <figure.h>
#ifndef HORISONTALLINE_H
#define HORISONTALLINE_H

using namespace std;

class HorisontalLine : public Figure
{
public:
    HorisontalLine(int xLeft, int xRight, int y, char s);     // добавление элемента
};

#endif // HORISONTALLINE_H

