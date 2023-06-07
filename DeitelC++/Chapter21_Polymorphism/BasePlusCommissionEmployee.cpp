#include "BasePlusCommissionEmployee.h"
#include <stdexcept>
#include <iostream>
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn,
                                                       double sales, double rate, double salary)
    : CommissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary);
    // cout << "BasePlusCommissionEmployee"
    //      << "< " << this << ">"
    //      << " CONSTRUCTOR" << endl;
}

BasePlusCommissionEmployee::~BasePlusCommissionEmployee()
{
    // cout << "BasePlusCommissionEmployee"
    //      << "< " << this << ">"
    //      << " DESTRUCTOR" << endl;
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if (salary >= 0.0)
        baseSalary = salary;
    else
        throw invalid_argument("Salary must be >= 0.0");
}

double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary() + CommissionEmployee::earnings();
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

void BasePlusCommissionEmployee::print() const
{
    cout << "BasePlusCommissionEmployee::print() <"<< this << ">" << endl;
    cout << "based-salaried ";
    CommissionEmployee::print();
    cout << "\nbase salary: " << getBaseSalary();
}