#ifndef BASEPLUS_COMMISSION_EMPLOYEE_H
#define BASEPLUS_COMMISSION_EMPLOYEE_H

#include <string>
#include "ComissionEmployee.h"
#include "Date.h"
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const std::string &, const std::string &,
                               const std::string &, double = 0.0, double = 0.0, double = 0.0);
    virtual ~BasePlusCommissionEmployee();
    void setBaseSalary(double);
    double getBaseSalary() const;
    virtual double earnings() const;
    virtual void print() const;

private:
    double baseSalary;
    Date hiringDate;
};

#endif