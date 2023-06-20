#include "Date.h"
#include <iostream>

using namespace std;

int main()
{
    const Date d(22, 9, 1977);
    const Date &r = d;
    const Date *p = &d;

    cout << d.yearQueried() << endl;
    d.year();
    cout << d.yearQueried() << endl;

    Date dd(13, 8, 1953);
    Date &rr = dd;
    Date *pp = &dd;

    cout << dd.yearQueried() << endl;
    dd.year();
    cout << dd.yearQueried() << endl;
    dd.setYear(1989);
    cout << dd.yearQueried() << endl;

}