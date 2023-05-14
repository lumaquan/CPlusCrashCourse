#include <cstdio>

// This variables and methods are defined somewhere else and not in this file
extern int x;
extern int f();
extern int x1;
extern double PI;
extern int f1(int x);


inline int f(int i)
{
    return i + 1;
}

void g()
{
    x = f();
}

int fun()
{
    return x*x;
}

struct S1{
    int a;
};

struct S1{
    int aa;
};

int main()
{

    printf("x = %d\n", x);
    g();
    printf("x = %d\n", x);
    printf("x1 = %d\n", x1);
    printf("PI = %f\n", PI);
    printf("f(2) = %d\n", f(2));
    printf("f1(2) = %d\n", f1(2));
     printf("fun() = %d\n", fun());
    return 0;
}