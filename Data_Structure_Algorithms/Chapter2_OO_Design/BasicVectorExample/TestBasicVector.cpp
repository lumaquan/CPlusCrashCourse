#include "BasicVector.h"
#include <iostream>

using namespace std;

class UnaClase
{
public:
    UnaClase(int x = 1) : x{x}
    {
    }

    friend ostream &operator<<(ostream &out, const UnaClase &una);

private:
    int x;
};

ostream &operator<<(ostream &out, const UnaClase &una)
{
    cout << "UnaClase(" << una.x << ")";
}

template <class T>
T minimum(const T &lhs, const T &rhs)
{
    return lhs < rhs ? lhs : rhs;
}

template <typename T>
T maximum(const T &lhs, const T &rhs)
{
    return lhs > rhs ? lhs : rhs;
}

template <typename T>
void printArray(const T *t, int size)
{
    cout << "[";
    if (size == 0)
    {
        cout << "]" << endl;
        return;
    }
    int i = 0;
    for (; i < size - 1; i++)
    {
        cout << t[i] << ", ";
    }
    cout << t[i] << "]" << endl;
}

int main()
{
    BasicVector<int> iv;
    BasicVector<float> fv;
    iv[0] = 9;
    iv[9] = 10;
    fv[0] = 3.14;
    fv[1] = 2.71;
    cout << iv[0]<< endl;
    cout << fv[1]<< endl;
    iv.print();
    fv.print();
    BasicVector<UnaClase> uCv;
    uCv.print();

    cout << minimum<int>(2, 3) << endl;
    cout << minimum<double>(5.9, 3.14) << endl;
    cout << minimum<string>(string("hello"), string("nadia")) << endl;
    cout << minimum<int>(3.14, 9) << endl;
    cout << minimum<float>(3.14, -8) << endl;

    int a[] = {1, 2, 3, 4, 5};
    printArray<int>(a, 5);
    UnaClase u[] = {UnaClase{1}, UnaClase{2}, UnaClase(10), UnaClase{20}};
    printArray(u, 4);
}