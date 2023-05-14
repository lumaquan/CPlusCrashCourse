#include <iostream>

using namespace std;

class Vector
{

public:
    Vector(double = 0.0, double = 0.0, double = 0.0);
    friend ostream &operator<<(ostream &out, const Vector &v);
    Vector operator+(const Vector &v);
    double operator*(const Vector &v);

private:
    double a[3];
    friend class Matrix;
};

Vector::Vector(double x, double y, double z)
{
    a[0] = x;
    a[1] = y;
    a[2] = z;
}

Vector Vector::operator+(const Vector &v)
{
    return Vector{a[0] + v.a[0], a[1] + v.a[1], a[2] + v.a[2]};
}

double Vector::operator*(const Vector &v)
{
    return a[0] * v.a[0] + a[1] * v.a[1] + a[2] * v.a[2];
}

ostream &operator<<(ostream &out, const Vector &v)
{
    out << "(" << v.a[0] << ", " << v.a[1] << ", " << v.a[2] << ")";
    return out;
}

class Matrix
{
public:
    Matrix(const Vector &r1, const Vector &r2, const Vector &r3)
    {
        a[0][0] = r1.a[0];
        a[0][1] = r1.a[1];
        a[0][2] = r1.a[2];
        a[1][0] = r2.a[0];
        a[1][1] = r2.a[1];
        a[1][2] = r2.a[2];
        a[2][0] = r3.a[0];
        a[2][1] = r3.a[1];
        a[2][2] = r3.a[2];
    }

    Vector mul(const Vector &v)
    {
        Vector w;
        for (size_t r = 0; r < 3; r++)
        {
            for (size_t c = 0; c < 3; c++)
            {
                w.a[r] += a[r][c] * v.a[c];
            }
        }
        return w;
    }

private:
    double a[3][3];
};

int main()
{
    Vector v1{1, 2, 3};
    Vector v2{2, 3, -5};
    Vector v3{0, 1, 4};
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v1 + v2 << endl;
    cout << v1 * v2 << endl;
    Matrix matrix{v1, v2, v3};
    cout << matrix.mul(v1) << endl;
}