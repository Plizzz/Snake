#include <iostream>
#include <windows.h>
#include <conio.h>
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
    int input1;
    int input2;
    while(true){
        snake.Move();
        Sleep(100);
        while(_kbhit()){
            input1 = _getch();
            if( input1 == 224 ){
                input2 = _getch();
                switch(input2)
                {
                case 72: snake.direction = UP;
                    snake.Move();
                    Sleep( 100 );
                    break;
                case 80: snake.direction = DOWN;
                    snake.Move();
                    Sleep( 100 );
                    break;
                case 75: snake.direction = LEFT;
                    snake.Move();
                    Sleep( 100 );
                    break;
                case 77: snake.direction = RIGHT;
                    snake.Move();
                    Sleep( 100 );
                    break;
                default: break;
                }
            }
        }
    }
    return 0;
}

