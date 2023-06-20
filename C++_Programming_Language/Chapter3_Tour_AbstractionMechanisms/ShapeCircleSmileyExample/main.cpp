#include "Circle.h"
#include "Smiley.h"

int main()
{
    Point p;
    p.x = 10;
    p.y = 20;

    Smiley sonrisita{p, 30};
    p.x = 2;
    p.y = 3;
    Shape *mouth = new Circle{p, 5};
    p.x = 3;
    p.y = 3;
    Shape *eye1 = new Circle{p, 1};
    Shape *eye2 = new Circle{p, 1};
    sonrisita.add_eye(eye1);
    sonrisita.add_eye(eye2);
    sonrisita.set_mouth(mouth);
    sonrisita.draw();
}