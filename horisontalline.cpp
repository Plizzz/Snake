#include <iostream>
#include <windows.h>
#include "horisontalline.h"

using namespace std;

HorisontalLine::HorisontalLine()
{
    first = NULL;
}
void HorisontalLine::addLine(int xLeft, int xRight, int y, char s)   // добавление элемента
{
    for( int x = xLeft; x <= xRight; x++){
        link* newlink = new link;           // выделяем память
        newlink->pnt.coord.X = x;
        newlink->pnt.coord.Y = y;
        newlink->pnt.sym = s;

        newlink->next = first;              // запоминаем значение first
        first = newlink;                    // first теперь указывает на новый элемент
    }
}

