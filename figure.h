#include <point.h>
#include <vector>
#ifndef FIGURE_H
#define FIGURE_H

using namespace std;

class Figure
{
protected:
    vector<Point> pVec;
public:
    Figure();
    void Draw();
    bool IsHit(Figure figure);
    bool IsHit(Point point);
};

#endif // FIGURE_H
