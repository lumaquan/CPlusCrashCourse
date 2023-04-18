#include <iostream>
#include <cmath>
#include <cstdio>


void printInt(int v);

int main()
{
    printInt(23);
    printf("%f\n", sqrt(729));
    puts("");
    return 0;
}

void printInt(int a)
{
    printf("%d\n", a);
    return;
}