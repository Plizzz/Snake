#include <windows.h>
#ifndef POINT_H
#define POINT_H


class Point
{
public:
    COORD coord;
    char sym;
    Point();
    Point(int x, int y, char s);
    void Draw();
};

#endif // POINT_H
