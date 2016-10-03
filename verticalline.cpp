#include <iostream>
#include <windows.h>
#include "verticalline.h"

using namespace std;

VerticalLine::VerticalLine()
{
    first = NULL;

}

void VerticalLine::addLine(int yDown, int yUp, int x, char s)   // добавление элемента
{
    for( int y = yDown; y <= yUp; y++){
        link* newlink = new link;           // выделяем память
        newlink->pnt.coord.X = x;
        newlink->pnt.coord.Y = y;
        newlink->pnt.sym = s;
        newlink->next = first;              // запоминаем значение first
        first = newlink;                    // first теперь указывает на новый элемент
    }
}
