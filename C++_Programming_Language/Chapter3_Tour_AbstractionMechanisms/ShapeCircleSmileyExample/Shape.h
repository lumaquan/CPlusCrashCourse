#pragma once

#include "Point.h"
#include <iostream>

using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "Shape<" << this << ">" << endl;
    }

    virtual Point center() const = 0;
    virtual void move(const Point &to) = 0;
    virtual void draw() const = 0;
    virtual void rotate(int ang) = 0;

    virtual ~Shape()
    {
        cout << "~Shape<" << this << ">" << endl;
    }
};