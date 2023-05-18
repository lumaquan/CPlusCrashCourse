#include "Vector.h"

using namespace std;

Vector::Vector(double x, double y, double z)
{
    a[0] = x;
    a[1] = y;
    a[2] = z;
}

ostream &operator<<(ostream &out, const Vector &v)
{
    out << "(" << v.a[0] << ", " << v.a[1] << ", " << v.a[2] << ")";
    return out;
}

Vector Vector::operator+(const Vector &v)
{
    return Vector{a[0] + v.a[0], a[1] + v.a[1], a[2] + v.a[2]};
}

double Vector::operator*(const Vector &v)
{
    return a[0] * v.a[0] + a[1] * v.a[1] + a[2] * v.a[2];
}

// GLOBAL friend function
void Zeroth(Vector &v)
{
    v.a[0] = 0;
    v.a[1] = 0;
    v.a[2] = 0;
}