#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

class Array
{
    friend std::ostream &operator<<(std::ostream &out, const Array &array);
    friend std::istream &operator>>(std::istream &in, Array &array);

public:
    Array(int = 10);
    Array(const Array &original);
    ~Array();
    Array &operator=(const Array &right);
    int &operator[](int i);

    bool operator==(const Array &right) const;
    bool operator!=(const Array &right) const
    {
        return !(*this == right);
    }
    int operator[](int i) const;
    int getSize() const;

private:
    int size;
    int *ptr;
    
};

#endif