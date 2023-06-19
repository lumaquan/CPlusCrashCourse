#include <iostream>
#include "Date.h"

using namespace std;

void processADate(Date date)
{
    cout << "process date: " << date << endl;
}

void processARefDate(Date &date)
{
    cout << "process a ref date: " << date << endl;
}

int main()
{

    Date today{2009, 5, 3};
    cout << "today = " << today << endl;
    Date copy = today;
    cout << "copy  = " << today << endl;

    Date birth{1977, 9, 22};
    cout << "birth  = " << birth << endl;
    processADate(birth);

    cout << endl;
    Date nadias = {1979, 4, 19};
    cout << "nadias  = " << nadias << endl;
    processARefDate(nadias);
    cout << endl;

    Date fer{nadias};
    cout << "fer  = " << fer << endl;

    cout << endl;
    cout << "Explicit constructor:" << endl;

    Date five = {5}; // obscure calls constructor with 1 argument
    cout << five << endl;
    Date six = 6;    // TERRIBLE!!!
    cout << six << endl;
    processADate(22);  
    processARefDate(five);

    Date seven{7};   // OK EXPLICIT
    processADate(Date{28});  // OK EXPLICIT
}