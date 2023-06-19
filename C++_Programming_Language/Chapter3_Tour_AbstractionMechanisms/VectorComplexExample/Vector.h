#include <iostream>
#include <stdexcept>

using namespace std;

class Vector
{
private:
    double *S;
    size_t sz;

public:
    Vector(initializer_list<double> ils = {}) : S{new double[ils.size()]}, sz{ils.size()}
    {
        cout << "Vector{}<" << this << ">" << endl;
        copy(ils.begin(), ils.end(), S);
    }

    Vector(size_t s) : S{new double[s]}, sz{s}
    {
        cout << "Vector(size_t)<" << this << ">" << endl;
        for (int i = 0; i < sz; i++)
        {
            S[i] = 0;
        }
    }

    // Follows pattern X(const X&)  ( stroustup 17.5.1)
    Vector(const Vector &v) : sz{v.sz}, S{new double[v.sz]}
    {
        cout << "Vector(const Vector &)<" << this << ">" << endl;
        for (int i = 0; i < sz; i++)
        {
            S[i] = v[i];
        }
    }

    // Follows patter X&operator=(const X&)  ( stroustup 17.5.1)
    Vector &operator=(const Vector &v)
    {
        cout << "<" << this << ">operator=(const Vector &)<" << &v << ">" << endl;
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

    size_t size() const
    {
        return sz;
    }

    friend ostream &operator<<(ostream &o, const Vector &v);
};

ostream &operator<<(ostream &o, const Vector &v)
{
    o << "[";
    if (v.sz == 0)
    {
        o << "]";
        return o;
    }
    for (int i = 0; i < v.sz - 1; i++)
    {
        o << v[i] << ", ";
    }
    o << v[v.sz - 1] << "]";
    return o;
}