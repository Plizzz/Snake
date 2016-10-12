#include "figure.h"
#include "point.h"

#ifndef SNAKE_H
#define SNAKE_H

class Snake : public Figure
{
private:
    Direction direction;
public:
    Snake(Point tail, int lenght, Direction _direction);
    void Move();
    Point GetNextPoint();
    void HandleKey(int input1);
    bool Eat(Point food);
};

#endif // SNAKE_H
