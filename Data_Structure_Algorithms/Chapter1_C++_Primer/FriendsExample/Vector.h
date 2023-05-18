#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector
{

    friend void Zeroth(Vector &v);
    friend class Matrix;

public:
    Vector(double = 0.0, double = 0.0, double = 0.0);
    friend std::ostream &operator<<(std::ostream &out, const Vector &v);
    Vector operator+(const Vector &v);
    double operator*(const Vector &v);
    void publicNotImplemented();

private:
    double a[3];
    void privateNotImplemented(); // TBI
};

#endif