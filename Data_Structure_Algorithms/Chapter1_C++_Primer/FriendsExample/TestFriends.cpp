#include "Matrix.h"
#include "Vector.h"
using namespace std;

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

    // Using an global function friend to Vector class to change vector.
    Zeroth(v1);
    cout << v1 << endl;
}