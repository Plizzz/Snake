#include "figure.h"

#ifndef VERTICALLINE_H
#define VERTICALLINE_H

class VerticalLine : public Figure
{
public:
    VerticalLine();
    void addLine(int yDown, int yUp, int x, char s);     // добавление элемента
};

#endif // VERTICALLINE_H
