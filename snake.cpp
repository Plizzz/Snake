#include <iostream>
#include <windows.h>
#include "snake.h"

Snake::Snake()
{

}

Snake::Snake( Point tail, int lenght, Direction _direction)
{
    direction = _direction;
    for( int i = 0; i < lenght; i++){
        Point p(tail);
        p.Move(i, direction);
        link* newlink = new link;
        newlink->pnt = p;
        newlink->next = first;
        first = newlink;
    }
}

