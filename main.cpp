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
    Point p(5, 4, '*');

    Sleep( 100 );
    HorisontalLine UpLine, DownLine;
    VerticalLine LeftLine, RightLine;

    // отрисовка рамочки
    UpLine.addLine(0, 98, 0, '+');   DownLine.addLine(0, 98, 24, '+');
    LeftLine.addLine(0, 24, 0, '+'); RightLine.addLine(0, 24, 98, '+');

    UpLine.Draw();      DownLine.Draw();
    LeftLine.Draw();    RightLine.Draw();

    Snake snake(p, 4, DOWN);
    snake.Draw();

 return 0;
}

