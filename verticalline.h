#include "figure.h"

#ifndef VERTICALLINE_H
#define VERTICALLINE_H


class VerticalLine : public Figure
{
public:
    VerticalLine(int yUp, int yDown, int x, char s);
};

#endif // VERTICALLINE_H
