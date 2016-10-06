#include <iostream>
#include <windows.h>
#include "point.h"
#include "horisontalline.h"
#include "verticalline.h"
#include "snake.h"

using namespace std;

int main()
{
    system("mode con cols=100 lines=25");

    // отрисовка рамочки
    HorisontalLine upLine(0, 99, 0, '+');   HorisontalLine downLine(0, 99, 24, '+');
    VerticalLine leftline(0, 24, 0, '+');      VerticalLine rightLine(0, 24, 99, '+');

    // отрисовка змейки
    Point p1(3, 4, '*');
    Snake snake(p1, 5, RIGHT);
    for(int i = 0; i < 60; i++){
        snake.Move();
        Sleep( 100 );
    }
    return 0;
}

