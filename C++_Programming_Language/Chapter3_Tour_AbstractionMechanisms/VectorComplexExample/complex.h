#include <iostream>
using namespace std;

class complex
{
    double re, im;
    friend ostream &operator<<(ostream &, const complex &);

public:
    complex(double r, double i) : re{r}, im{i} {}
    complex(double r) : re{r}, im{0} {}
    complex() : re{0}, im{0} {}

    double real() const { return re; }
    void setReal(double d) { re = d; }
    double imag() const { return im; }
    void setImag(double d) { im = d; }

    complex &operator+=(const complex &z)
    {
        re += z.re;
        im += z.im;
        return *this;
    }

    complex &operator-=(const complex &z)
    {
        re -= z.re;
        im -= z.im;
        return *this;
    }
};

ostream &operator<<(ostream &out, const complex &c)
{
    out << "(" << c.re << ", " << c.im << ")";
    return out;
}
