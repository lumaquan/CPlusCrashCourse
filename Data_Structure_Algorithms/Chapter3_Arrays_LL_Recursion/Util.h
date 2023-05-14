#ifndef UTIL_H
#define UTIL_H

class Util
{
public:
    enum order
    {
        UP,
        DOWN,
    };

    int *array_of_ints(int n, order order);
    void printArray(int *a, int n);
};

#endif