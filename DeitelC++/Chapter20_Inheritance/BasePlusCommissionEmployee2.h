#ifndef BASEPLUS2_H
#define BASEPLUS2_H

#include <string>
#include "ComissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee2 : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee2(const string &, const string &,
                                const string &, double = 0.0, double = 0.0, double = 0.0);
    void setBaseSalary(double);
    
    double getBaseSalary() const;
    double earnings() const;
    void print() const;

private:
    double baseSalary;
};

#endif