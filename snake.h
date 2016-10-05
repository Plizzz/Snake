#include "figure.h"
#include "point.h"

#ifndef SNAKE_H
#define SNAKE_H

class Snake : public Figure
{
private:
    Direction direction;
public:
    Snake();
    Snake(Point tail, int lenght, Direction _direction);
};

#endif // SNAKE_H
