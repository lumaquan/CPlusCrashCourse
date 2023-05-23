#include "BasicVector.h"
#include <iostream>

template <typename T>
BasicVector<T>::BasicVector(int cap)
{
    capacity = cap;
    a = new T[capacity];
}

template <typename T>
T &BasicVector<T>::operator[](int i) const
{
    return a[i];
}

template <typename T>
void BasicVector<T>::print() const
{
    for (int i = 0; i < capacity; i++)
    {
        std::cout << (*this)[i] << ", ";
    }
    std::cout << std::endl;
}