#include "BasePlusCommissionEmployee2.h"
#include <stdexcept>
#include <iostream>
using namespace std;

BasePlusCommissionEmployee2::BasePlusCommissionEmployee2(const string &first, const string &last, const string &ssn,
                                                         double sales, double rate, double salary) : CommissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee2::setBaseSalary(double salary)
{
    if (salary >= 0.0)
        baseSalary = salary;
    else
        throw invalid_argument("Salary must be >= 0.0");
}

double BasePlusCommissionEmployee2::earnings() const
{
    return getBaseSalary() + CommissionEmployee::earnings();
}

double BasePlusCommissionEmployee2::getBaseSalary() const
{
    return baseSalary;
}

void BasePlusCommissionEmployee2::print() const
{
    cout << "based-salaried ";
    CommissionEmployee::print();
    cout << "\nbase salary: " << getBaseSalary();
}