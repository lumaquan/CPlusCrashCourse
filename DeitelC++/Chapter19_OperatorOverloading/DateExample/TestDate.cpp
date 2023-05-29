#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date myBirth{9, 22, 1977};
    cout << myBirth << endl;
    ++ ++ ++myBirth; // can increase the SAME object several times
    cout << myBirth << endl;
    myBirth++;
    cout << myBirth << endl;
    myBirth++ ++ ++ ++ ++; // increase original object ONLY once
    cout << myBirth << endl;

    myBirth += 5;
    cout << myBirth << endl;
    (myBirth += 6) += 12; // because operator+= returns a non-const Date&
    cout << myBirth << endl;

    Date date1;
    cout << "default date: " << date1 << endl;
    date1.setDate(12, 31, 2009);
    cout << date1 << endl;
    cout << "is 29 the last day of the month?: " << date1.endOfMonth(29) << endl;
    cout << "is 31 the last day of the month?: " << date1.endOfMonth(31) << endl;
    date1++;
    cout << date1 << endl;

    Date d = {1, 2, 2000}; // I do not remember how to solve this issue
    cout << d << endl;

    Date *dd = new Date[10];
    for (int i = 0; i < 10; i++)
    {
        cout << dd[i] << endl;
    }
    /*
        Date ddd[] = new Date[15]; // this is not allwed
        for (int  i = 0; i < 15; i++)
        {
            cout <<  dd[i]  << endl;
        }
    */

    Date *pd = new Date(5, 22, 2023);
    pd = &d;

    int ai[] = {1, 2, 3, 4};
    ai[0] = 10; // a. has type    int * const
    cout << ai[0] << endl;

    /*
        ai = new int[10];   // is not allowed because ai es *const
     */

    delete[] dd;
    delete pd;
    
}