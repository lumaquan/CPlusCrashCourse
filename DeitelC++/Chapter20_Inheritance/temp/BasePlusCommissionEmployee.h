#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
using namespace std;

class BasePlusCommissionEmployee
{
    BasePlusCommissionEmployee(const string &, const string &,
                               const string &, double = 0.0, double = 0.0, double = 0.0);
    void setFirstName(const string &);
    void setLastName(const string &);
    void setSocialSecurityNumber(const string &);
    void setGrossSales(double);
    void setCommissionRate(double);
    void setBaseSalary(double);

    string getFirstName() const;
    string getLastName() const;
    string getSocialSecurityNumber() const;
    double getCommissionRate() const;
    double getGrossSales() const;
    double getBaseSalary() const;
    double earnings() const;

    void print() const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;
    double commissionRate;
    double baseSalary;
};
#endif