#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t;

    int &hourRef = t.setHour(20);
    cout << "Valid hour before modification: " << hourRef;

    hourRef = 30;
    cout << "\nInvalid hour after modification: " << t.getHour();

    t.setHour(12) = 74;

    cout << "\n\n*************************************************\n"
         << "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
         << "t.setHour(12) as an lvalue, invalid hour: "
         << t.getHour()
         << "\n*************************************************" << endl;
}