#include <iostream>
#include "Date.h"
using namespace std;


int main()
{

    Date date1(7, 4, 2004);
    Date date2;
    Date date3{date1};

    cout << "date1 = ";
    date1.print();
    cout << "\ndate2 = ";
    date2.print();
    cout << "\ndate3 = ";
    date3.print();

    date2 = date1;
    cout << "\n\nAfter default memberwise assignment, date2 = ";
    date2.print();
    cout << endl;

    return 0;
}