#include <iostream>

using namespace std;
int x = 1;
int main()
{
    cout << x << endl;
    int x = 2;
    cout << x << endl;
    cout << ::x << endl;

    {
        int x = 3;
        cout << x << endl;
        cout << ::x << endl; // it refers to global, no first local.
    }

    int y = y; // scope of y starts before =

    if (x > 1)
    {
        int z = 4;
    }
    else
    {
        int zz = 44;
    }
}