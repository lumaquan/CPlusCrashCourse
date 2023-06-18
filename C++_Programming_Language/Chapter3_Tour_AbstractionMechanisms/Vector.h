#include <iostream>
#include <stdexcept>

using namespace std;

class Vector
{
private:
    double *S;
    int sz;

public:
    Vector(int s = 1) : S{new double[s]}, sz{s}
    {
        cout << "Vector<" << this << ">" << endl;
        for (int i = 0; i < sz; i++)
        {
            S[i] = 0;
        }
    }

    // Follows pattern X(const X&)  ( stroustup 17.5.1)
    Vector(const Vector &v) : sz{v.sz}, S{new double[v.sz]}
    {
        cout << "Vector(copy)<" << this << ">" << endl;
        for (int i = 0; i < sz; i++)
        {
            S[i] = v[i];
        }
    }

    // Follows patter X&operator=(const X&)  ( stroustup 17.5.1)
    Vector &operator=(const Vector &v)
    {
        cout << "<" << this << ">=<" << &v << ">" << endl;
        if (v.sz != sz)
        {
            sz = v.sz;
            delete[] S;
            S = new double[sz];
        }
        for (int i = 0; i < sz; i++)
        {
            S[i] = v[i];
        }
        return *this;
    }

    ~Vector()
    {
        cout << "~Vector<" << this << ">" << endl;
        delete[] S;
    }

    double &operator[](int i)
    {
        if (i < 0 || i >= sz)
        {
            throw out_of_range("index out of range");
        }
        else
        {
            return S[i];
        }
    }

    double &operator[](int i) const
    {
        if (i < 0 || i >= sz)
        {
            throw out_of_range("index out of range");
        }
        else
        {
            return S[i];
        }
    }

    int size() const
    {
        return sz;
    }

    friend ostream &operator<<(ostream &o, const Vector &v);
};

ostream &operator<<(ostream &o, const Vector &v)
{
    o << "[";
    for (int i = 0; i < v.sz - 1; i++)
    {
        o << v[i] << ", ";
    }
    o << v[v.sz - 1] << "]";
    return o;
}