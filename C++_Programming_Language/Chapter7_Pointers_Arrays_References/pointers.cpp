
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int a = 10;
    int arr[] = {-1, -2, -3, -4, -5};
    int *pa = &a;
    void *p = pa;
    void *q = pa;
    int *parr = arr;
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    cout << ((p == q) ? "equal" : "different") << endl;
    // cout << *p << endl;   ERROR: p cannot be deferenced
    cout << *((int *)p) << endl;

    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << "*parr + i =" << *parr + i << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "*parr++ = " << *parr++ << endl;
    }

    parr = arr;
    for (int i = 0; i < n; i++)
    {
        cout << "*(parr++) = " << *(parr++) << endl;
    }

    parr = arr;
    for (int i = 0; i < n; i++)
    {
        cout << "*++parr = " << *++parr << endl;
    }

    // int *b = p;      // Implicit casting to a specific pointer is not allowed
    // double *c = p;

    int *pp = (int *)p; // safe if is known that p was initilized to point to int

    double *ppp = (double *)p;
    cout << "*ppp = " << *ppp << endl; // use of 8 bytes starting at p with unsafe result

    double *pppp = static_cast<double *>(q); // UGLY CASTING
    cout << "*pppp = " << *pppp << endl;     // use of 8 bytes starting at p with unsafe result

    void *myp = &a;
    void *myint = malloc(4); // allocate space for an integer
    *(int *)myint = 3;       // put 3 into allocated space
    int *val = (int *)myint;
    cout << *val << endl;

    // The nullptr and NULL pointers
    void *nil = nullptr;
    int *npi = nullptr;
    printf("nil = %p", nil);
    cout << nil << endl;
    int *r = NULL;
    printf("r = %p", r);
    cout << r << endl;
}