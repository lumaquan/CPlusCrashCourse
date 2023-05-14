#include <iostream>
#include <iomanip>
#include "SalesPerson.h"
using namespace std;

SalesPerson::SalesPerson()
{
    for (int i = 0; i < MONTHS_PER_YEAR; i++)
    {
        sales[i] = 0.0;
    }
}

void SalesPerson::getSalesFromUser()
{
    double sales_figure;

    for (size_t i = 1; i <= MONTHS_PER_YEAR; i++)
    {
        cout << "Introduce sales for month " << i << ": ";
        cin >> sales_figure;
        setSales(i, sales_figure);
    }
}

void SalesPerson::setSales(int month, double sales_figure)
{
    if ((month >= 1 && month <= MONTHS_PER_YEAR) && sales_figure > 0)
    {
        sales[month - 1] = sales_figure;
    }
    else
    {
        cout << "Error: either month or sales figure is wrong for month: " << month << endl;
    }
}

void SalesPerson::printAnnualSales()
{

    cout << setprecision(2) << fixed << "\nTotal annual sales are: " << totalAnnualSales() << endl;
}

double SalesPerson::totalAnnualSales()
{
    double total = 0.0;
    for (size_t i = 0; i < MONTHS_PER_YEAR; i++)
    {
        total += sales[i];
    }
    return total;
}