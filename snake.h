#include "figure.h"
#include "point.h"

#ifndef SNAKE_H
#define SNAKE_H

class Snake : public Figure
{
public:
    Snake();
    Snake(Point tail, int lenght, Direction direction);
};

#endif // SNAKE_H
