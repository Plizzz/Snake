#include <iostream>
#include <windows.h>
#include "point.h"
#include "horisontalline.h"
#include "verticalline.h"

using namespace std;

int main()
{
    Sleep( 100 );
    HorisontalLine UpLine, DownLine;
    VerticalLine LeftLine, RightLine;

    // отрисовка рамочки
    UpLine.addLine(0, 79, 0, '+');   DownLine.addLine(0, 79, 24, '+');
    LeftLine.addLine(0, 24, 0, '+'); RightLine.addLine(0, 24, 79, '+');

    UpLine.Draw();  DownLine.Draw();
    LeftLine.Draw();    RightLine.Draw();

 return 0;
}

