#include <iostream>
#include <windows.h>
#include <conio.h>
#include "point.h"
#include "horisontalline.h"
#include "verticalline.h"
#include "snake.h"
#include "foodcreator.h"

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

    Foodcreator FoodCreator(101, 25, '$');
    Point food = FoodCreator.CreateFood();
    food.Draw();
    int input = 0;

    while(true){
        if(snake.Eat(food)){
            food = FoodCreator.CreateFood();
            food.Draw();
        }else
            snake.Move();
        Sleep(100);
        while(_kbhit()){
            snake.HandleKey(input);
        }
    }
    return 0;
}

