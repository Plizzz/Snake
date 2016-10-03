#include "figure.h"
#ifndef HORISONTALLINE_H
#define HORISONTALLINE_H

class HorisontalLine : public Figure
{
public:
    HorisontalLine();
    void addLine(int xLeft, int xRight, int y, char s);     // добавление элемента
};

#endif // HORISONTALLINE_H

