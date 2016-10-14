#include <iostream>
#include <windows.h>
#include <conio.h>
#include "point.h"
#include "snake.h"
#include "foodcreator.h"
#include "walls.h"

using namespace std;

int main()
{
    system("mode con cols=100 lines=25");

    //отрисовка рамочки
    Walls walls(100, 25);
    walls.Draw();

    // отрисовка змейки
    Point p1(3, 4, '*');
    Snake snake(p1, 5, RIGHT);

    Foodcreator FoodCreator(101, 25, '$');
    Point food = FoodCreator.CreateFood();
    food.Draw();
    int input = 0;

    while(true){
        if( walls.IsHit(snake) || snake.IsHitTail() ){
            break;
        }

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

