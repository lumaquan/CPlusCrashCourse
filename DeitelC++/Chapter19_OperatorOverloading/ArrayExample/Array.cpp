#include "Array.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

Array::Array(int s)
{
    std::cout << "Array(int) constructor called on " << this << endl;
    if (s > 0)
    {
        size = s;
    }
    else
        throw invalid_argument("Array size must be a positive number.");

    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = 0;
    }
}

Array::Array(const Array &original) : size{original.size}
{
    std::cout << "Array(Array) constructor called on " << this << endl;
    if (&original != this)
    {
        ptr = new int[size];
        for (int i = 0; i < size; i++)
        {
            ptr[i] = original.ptr[i];
        }
    }
    else
        throw logic_error("Copy to itself is a logical error.");
}

Array::~Array()
{
    std::cout << "destructor called on " << this << endl;
    delete[] ptr;
}

Array &Array::operator=(const Array &right)
{
    std::cout << "assignment operator called on " << this << endl;
    if (size != right.size)
    {
        delete[] ptr;
        size = right.size;
        ptr = new int[size];
    }
    for (int i = 0; i < size; i++)
    {
        ptr[i] = right.ptr[i];
    }
    return *this;
}

int &Array::operator[](int i)
{
    if (i >= 0 && i < size)
    {
        return ptr[i];
    }
    else
        throw out_of_range("Subscript out of range");
}

bool Array::operator==(const Array &right) const
{
    if (&right == this)
        return true;

    if (size != right.size)
        return false;
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] != right.ptr[i])
            return false;
    }
    return true;
}

int Array::operator[](int i) const
{
    if (i >= 0 && i < size)
    {
        return ptr[i];
    }
    else
        throw out_of_range("Subscript out of range");
}

int Array::getSize() const
{
    return size;
}

std::ostream &operator<<(std::ostream &out, const Array &array)
{
    if (array.size == 1)
    {
        out << "[]";
        return out;
    }
    out << "[";
    int i;
    for (i = 0; i < array.size - 1; i++)
    {
        out << array.ptr[i] << " ";
    }
    out << array.ptr[i];
    out << "]";
    return out;
}

std::istream &operator>>(std::istream &in, Array &array)
{
    for (int i = 0; i < array.size; i++)
    {
        in >> array.ptr[i];
    }
    return in;
}
