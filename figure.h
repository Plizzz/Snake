#include <point.h>
#ifndef FIGURE_H
#define FIGURE_H

struct link
{
    Point pnt;
    link *next;
};

class Figure
{
protected:
    link* first;
public:
    Figure();
    void Draw();
};

#endif // FIGURE_H
