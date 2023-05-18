#ifndef MATRIX_H
#define MATRIX_H

#include "Vector.h"

class Matrix
{
public:
    Matrix(const Vector &r1, const Vector &r2, const Vector &r3);

    Vector mul(const Vector &v);

private:
    double a[3][3];
};
#endif