#include <windows.h>
#ifndef POINT_H
#define POINT_H

enum Direction
{
    RIGHT,
    LEFT,
    UP,
    DOWN
};

class Point
{
public:
    COORD coord;
    char sym;
    Point();
    Point(Point *p);
    Point(int x, int y, char s);
    void Draw();
    void Move(int offset, Direction direction);
};

#endif // POINT_H
