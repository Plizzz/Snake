#include "snake.h"

using namespace std;

Snake::Snake( Point tail, int lenght, Direction _direction)
{
    direction = _direction;
    for( int i = 0; i < lenght; i++){
        Point p(tail);
        p.Move(i, direction);
        pVec.push_back(p);
    }
    for(int i = 0; i < pVec.size(); i++){
        Point p = pVec[i];
        p.Draw();
    }
}

void Snake::Move()
{
    Point tail;
    tail = pVec.front();
    pVec.erase(pVec.begin());

    Point head = GetNextPoint();
    pVec.push_back(head);

    tail.Clear();
    head.Draw();
}

Point Snake::GetNextPoint()
{
    Point head;
    head = pVec.back();
    Point nextPoint(head);
    nextPoint.Move(1, direction);
    return nextPoint;
}
