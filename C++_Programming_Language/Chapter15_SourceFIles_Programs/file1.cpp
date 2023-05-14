int x = 42;
int x1 = 89;
extern const double PI = 3.141592; // necessary extern to make a const symbol external linkage

int f()
{
    return x;
}

inline int f(int i)
{
    return i;
}

int f1(int x)
{
    return x + x1;
}

namespace luis 
{
    int fun()   // this function is not the same as fun() defined in file2.cpp
    {
        return x1 * x1;
    }
}