#include "SalesPerson.h"
#include <iostream>

using namespace std;

int main()
{
    SalesPerson s;
    cout << "GET SALES FROM USER FOR SALESPERSON S" << endl;
    s.getSalesFromUser();
    cout << "PRINT SALES FOR SALESPERSON S" << endl;
    s.printAnnualSales();
    SalesPerson s2 = s;
    cout << "PRINT SALES FOR SALESPERSON S2" << endl;
    s2.printAnnualSales();
    cout << "GET SALES FROM USER FOR SALES PERSON S2" << endl;
    s2.getSalesFromUser();
    cout << "PRINT SALES FOR SALESPERSON S2" << endl;
    s2.printAnnualSales();
    cout << "PRINT SALES FOR SALESPERSON S" << endl;
    s.printAnnualSales();
}