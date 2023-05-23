#include <iostream>
#include <vector>
using namespace std;
#include "Util.h"

int *Util::array_of_ints(int n, order order)
{
    int a[n];

    if (order == DOWN)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            a[i] = i;
        }
    }
    return a;
}

void Util::printArray(int *a, int n)
{
    cout << "[";
    if (n = 0)
    {
        cout << " ]" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << ", ";
    }
    cout << a[n - 1] << "]" << endl;
}