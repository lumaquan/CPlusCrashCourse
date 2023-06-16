#include <iostream>
#include <string>
using namespace std;

template <typename Scalar>
class complex
{

public:
    Scalar re, im;

    complex() : re{}, im{} {};

    template <typename T>
    complex(T rr = 0, T ii = 0) : re{rr}, im{ii} {}

    template <typename T>
    complex(const complex<T> &c) : re{c.re}, im{c.im} {}

    template <typename T>
    bool positiveplane(const T&) const;
};
int main()
{
    complex<float> cf;
    cout << cf.re << " " << cf.im << endl;

    complex<string> cs;
    cout << cs.re << " " << cs.im << endl;

    complex<double> cd{cf};
    cout << cd.re << " " << cd.im << endl;

    // complex<int> ci{cf};     float cannot be narrowed to int.
    // cout << ci.re << " " << ci.im << endl;

    complex<int> ci{2, 4};
    cout << ci.re << " " << ci.im << endl;

    // complex<int> ci{2.0, 4.0};   double cannot be narrowed to int.
    // cout << ci.re << " " << ci.im << endl;
}