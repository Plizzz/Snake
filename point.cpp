#include <iostream>
#include <windows.h>
#include "point.h"
using namespace std;

Point::Point()
{

}
Point::Point(Point *p)
{
    coord = p->coord;
    sym = p->sym;
}

Point::Point(int x, int y, char s)
{
    coord.X = x;
    coord.Y = y;
    sym = s;
}

void Point::Draw()
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    cout << sym;
}

void Point::Clear()
{
    sym = ' ';
    Draw();
}

void Point::Move(int offset, Direction direction)
{
    if(direction == RIGHT)
        coord.X += offset;

    else if(direction == LEFT)
        coord.X -= offset;

    else if(direction == UP)
        coord.Y -= offset;

    else if(direction == DOWN)
        coord.Y += offset;

}
