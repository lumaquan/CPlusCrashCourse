#include "ComissionEmployee.h"
#include <iostream>

usging namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string &last,
                                       const string &ssn, double sales, double rate)
{
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setFirstName(const string &first)
{
    firstName = first;
}

void CommissionEmployee::setLastName(const string &last)
{
    lastName = last;
}

void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}

void CommissionEmployee::setGrossSales(double sales)
{
    if (sales > 0.0)
        grossSales = sales;
    else
        throw invalid_argument("Gross sales must be >= 0.0");
}

void CommissionEmployee::setCommissionRate(double rate)
{
    if (rate > 0.0 && rate < 1.0)
    {
        commissionRate = rate;
    }
    else
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}

string CommissionEmployee::getFirstName() const
{
    return firstName;
}

string CommissionEmployee::getLastName() const
{
    return lastName;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

double CommissionEmployee::earnings() const
{
    return grossSales * commissionRate;
}

void CommissionEmployee::print() const
{
    cout << "commission employee: " << firstName << ' ' << lastName
         << "\nsocial security number: " << socialSecurityNumber
         << "\ngross sales: " << grossSales
         << "\ncommission rate: " << commissionRate;
}
