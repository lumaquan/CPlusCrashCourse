#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
    Circle(Point &p, int r) : c{p}, r{r}
    {
        cout << "Circle<" << this << ">" << endl;
    }

    Point center() const
    {
        return c;
    }

    void move(const Point &to)
    {
        c = to;
    }

    void draw() const
    {
        cout << "drawing circle (" << c.x << "," << c.y << "," << r << ")" << endl;
    }

    void rotate(int ang) {}

    ~Circle()
    {
        cout << "~Circle<" << this << ">" << endl;
    }

private:
    Point c;
    int r;
};