#include "Array.h"
#include <iostream>

using namespace std;

void printArray(Array a)
{
    cout << a << endl;
}

Array returnObject(const Array &a)
{
    return a;
}

Array &returnReference(Array &a)
{
    a[0] = 100;
    return a;
}



int main()
{
    cout << "MAIN STARTS" << endl;

    cout << "create a1 and a2: " << endl;
    Array a1{3};
    Array a2{5};

    cout << "Initial values for a1 and a2:" << endl;
    cout << a1 << endl;
    cout << a2 << endl;

    cout << "Introduce new values for a1:" << endl;
    cin >> a1;
    cout << "Introduce new values for a2:" << endl;
    cin >> a2;

    cout << "New a1 and a2 are:" << endl;
    cout << a1 << endl;
    cout << a2 << endl;

    cout << "Are a1 and a2 equal?  " << (a1 == a2) << endl;
    cout << "Are a1 and a2 different?  " << (a1 != a2) << endl;
    cout << "Are a1 and a1 equal?  " << (a1 == a1) << endl;
    cout << "Are a1 and a1 different?  " << (a1 != a1) << endl;

    cout << "call to printArray(Array):" << endl;
    printArray(a1);

    cout << "create a3 with copy, a3{a1}: " << endl;
    Array a3{a1};

    cout << "create a4 with copy, a4 = a2: " << endl;
    Array a4 = a2;

    cout << "call to returnObject(Array&): " << endl;
    cout << returnObject(a1) << endl;

    cout << "call to returnReference(Array&): " << endl;
    cout << returnReference(a2) << endl;

    cout << "create a5 with default ={} " << endl;
    Array a5 = {2};
    cout << a5 << endl;

    cout << "create a6 and the assign a1: " << endl;
    Array a6;
    a6 = a1;
    cout << a6 << endl;

    cout << "create a7 using new operator and conventional constructor: " << endl;
    Array *pa7 = new Array(2);
    cout << *pa7 << endl;
    cout << "delete a7: " << endl;
    delete pa7;

    cout << "create a8 using new operator and copy constructor: " << endl;
    Array *pa8 = new Array{a1};
    cout << *pa8 << endl;
    cout << "delete a8: " << endl;
    delete pa8;


  

    cout << "MAIN ENDS" << endl;
}