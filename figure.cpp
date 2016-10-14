#include "figure.h"

using namespace std;

Figure::Figure()
{

}
void Figure::Draw()
{
    for(int i = 0; i < pVec.size(); i++){
        Point p = pVec[i];
        p.Draw();
    }
}

bool Figure::IsHit(Figure figure)
{
    for(int i = 0; i < pVec.size(); i++){
        Point p = pVec[i];
        if(figure.IsHit(p))
            return true;
    }
    return false;
}

bool Figure::IsHit(Point point)
{
    for(int i = 0; i < pVec.size(); i++){
        Point p = pVec[i];
        if(p.IsHit(point))
            return true;
    }
    return false;
}
