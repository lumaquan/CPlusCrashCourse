#include <cstdio>
#include <iostream>
#include <string>
#include "Util.h"

using namespace std;

void insertion_sort(int *a, int n)
{
    int current = 0;
    int j;
    for (int i = 1; i < n; i++)
    {
        current = a[i];
        j = i - 1;
        while (j >= 0 && current < a[j])
        {
            a[j + 1] = a[i];
            j--;
        }
        a[j + 1] = current;
    }
}

extern Util util;

int main()
{
    int *a = util.array_of_ints(10, util.DOWN);
    util.printArray(a, 10);
    return 0;
}