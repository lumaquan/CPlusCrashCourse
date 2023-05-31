#include "BasePlusCommissionEmployee.h"
#include <iostream>

usging namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last,
                                                       const string &ssn, double sales, double rate, double salay)
{
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setFirstName(const string &first)
{
    firstName = first;
}

void BasePlusCommissionEmployee::setLastName(const string &last)
{
    lastName = last;
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}

void BasePlusCommissionEmployee::setGrossSales(double sales)
{
    if (sales > 0.0)
        grossSales = sales;
    else
        throw invalid_argument("Gross sales must be >= 0.0");
}

void BasePlusCommissionEmployee::setCommissionRate(double rate)
{
    if (rate > 0.0 && rate < 1.0)
    {
        commissionRate = rate;
    }
    else
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if (salary >= 0.0)
        baseSalary = salary;
    else
        throw invalid_argument("Salary must be >= 0.0");
}

string BasePlusCommissionEmployee::getFirstName() const
{
    return firstName;
}

string BasePlusCommissionEmployee::getLastName() const
{
    return lastName;
}

string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

double BasePlusCommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double BasePlusCommissionEmployee::getGrossSales() const
{
    return grossSales;
}

double BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + (commissionRate * grossSales);
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried commission employee: " << firstName << ' ' << lastName
         << "\nsocial security number: " << socialSecurityNumber
         << "\ngross sales: " << grossSales
         << "\ncommission rate: " << commissionRate;
    << "\nbase salary: " << baseSalary;
}
