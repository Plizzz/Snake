#include <ctime>
#include <cstdlib>
#include "foodcreator.h"

using namespace std;

int Random(int min, int max) {
    srand( time( 0 ) );
    return min + rand() % (max - min);
}

Foodcreator::Foodcreator(int mapwight, int mapheight, char sym)
{
    this->mapwight = mapwight;
    this->mapheight = mapheight;
    this->sym = sym;
}

Point Foodcreator::CreateFood()
{
    int x = Random(2, mapwight-2);
    int y = Random(2, mapheight-2);
    return Point(x, y, sym);
}
