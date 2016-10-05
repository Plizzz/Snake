#include "figure.h"

Figure::Figure()
{
    first = NULL;
}

void Figure::Draw()
{
    link* current = first;
    while(current){
        current->pnt.Draw();
        current = current->next;
    }
}
