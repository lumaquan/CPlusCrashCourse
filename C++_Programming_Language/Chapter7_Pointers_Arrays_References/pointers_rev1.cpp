#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *aPtr = &a;

    float b = 3.1416;
    float *bPtr = &b;

    char  c = 'z';
    char *cPtr = &c;
    
    cout <<"*aPtr =" << *aPtr << endl;
    cout <<"*bPtr =" << *bPtr << endl;
    cout <<"*cPtre =" << *cPtr << endl;

    *aPtr = 20;
    *bPtr = 0.618;
    *cPtr ='\0';
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    aPtr = aPtr++;  // EQ.  aPtr = aPtr & aPtr + 1; last val is discarded.
    cout <<"*aPtr =" << *aPtr << endl;
    aPtr = ++aPtr; //  WORKS  
    cout <<"*aPtr =" << *aPtr << endl;
    aPtr+=2;  // WORKS

    void * voidPtr = aPtr;
    voidPtr = bPtr;
    voidPtr = cPtr;
    voidPtr = &aPtr;
    voidPtr = &bPtr;
    voidPtr = &cPtr;
    voidPtr = &voidPtr;     // void* can be pointed to any object, even a pointer

    /*
    NOT ALLOWED 
    voidPtr++;
    ++voidPtr;
    voidPtr+1;
    voidPtr+=2    
    */
}