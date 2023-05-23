#include "Count.h"

#include <iostream>

using namespace std;

Count::Count() : x{0} {}

void Count::print() const
{
    cout << x << endl;
}

void Count::print()
{
    this->x += 23;
    cout << x << endl;
}

void setX(Count &c, int v)
{
    c.x = v;
}