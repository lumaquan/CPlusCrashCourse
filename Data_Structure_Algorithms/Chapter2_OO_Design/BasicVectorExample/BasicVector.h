#ifndef BASIC_VECTOR_H
#define BASIC_VECTOR_H

template <typename T>
class BasicVector
{
public:
    BasicVector(int cap = 10);
    T &operator[](int i) const;
    void print() const;

private:
    T *a;
    int capacity;
};

#include "BasicVector.tpp"

#endif