#include <iostream>
#include <windows.h>
#include "point.h"

using namespace std;

Point::Point()
{

}
Point::Point(int x, int y, char s){
    coord.X = x;
    coord.Y = y;
    sym = s;
}
void Point::Draw(){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    cout << sym;
}
