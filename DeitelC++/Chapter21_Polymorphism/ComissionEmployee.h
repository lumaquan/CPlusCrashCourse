#ifndef COMMISSION_H
#define COMMISSION_H
#include <string>
#include "Point.h"
using namespace std;

class CommissionEmployee
{
public:
    CommissionEmployee(const string &, const string &, const string &,
                       double = 0.0, double = 0.0);
    virtual ~CommissionEmployee();

    void setFirstName(const string &);
    void setLastName(const string &);
    void setSocialSecurityNumber(const string &);
    void setGrossSales(double);
    void setCommissionRate(double);

    string getFirstName() const;
    string getLastName() const;
    string getSocialSecurityNumber() const;
    double getCommissionRate() const;
    double getGrossSales() const;
    double earnings() const;
    void print() const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;
    double commissionRate;
    //Point p;
};

#endif