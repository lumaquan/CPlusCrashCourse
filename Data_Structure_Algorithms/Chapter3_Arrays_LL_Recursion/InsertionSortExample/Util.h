#ifndef UTIL_H
#define UTIL_H
#include <iostream>


template <typename T>
void printArray(const T *const t, int size)
{
    std::cout << "[";
    if (size == 0)
    {
        std::cout << "]" << std::endl;
        return;
    }
    int i = 0;
    for (; i < size - 1; i++)
    {
        std::cout << t[i] << ", ";
    }
    std::cout << t[i] << "]" << std::endl;
}

#endif