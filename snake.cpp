#include "snake.h"
#include <conio.h>

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
void Snake::HandleKey(int input1)
{
    input1 = _getch();
    if( input1 == 224 ){
        int input2 = _getch();
        switch(input2)
        {
        case 72: direction = UP;
            Move();
            Sleep( 100 );
            break;
        case 80: direction = DOWN;
            Move();
            Sleep( 100 );
            break;
        case 75: direction = LEFT;
            Move();
            Sleep( 100 );
            break;
        case 77: direction = RIGHT;
            Move();
            Sleep( 100 );
            break;
        default: break;
        }
    }
}

bool Snake::Eat(Point food)
{
    Point head = GetNextPoint();
    if(head.IsHit(food)){
        food.sym = head.sym;
        pVec.push_back(food);
        return true;
    }else
        return false;
}

bool Snake::IsHitTail()
{
    Point head = pVec.back();
    for( int i = 0; i < pVec.size()-2; i++)
        if( head.IsHit(pVec[i]) )
            return true;
    return false;
}
