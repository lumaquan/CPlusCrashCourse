
#include "Progression.h"
#include <iostream>

using namespace std;

Progression::Progression(long f): first{f},current{f}
{

}

Progression::~Progression()
{
}

void Progression::printProgression(int n)
{
    cout << firstValue();
    for (int i = 2; i <= n; i++)
        cout << " " << nextValue();
    cout << endl;
}

long Progression::firstValue()
{
    current = first;
    return current;
}

long Progression::nextValue()
{
    return ++current;
}
