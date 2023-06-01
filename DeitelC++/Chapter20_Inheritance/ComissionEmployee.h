#ifndef COMMISSION_H
#define COMMISSION_H
#include <string>
using namespace std;

class CommissionEmployee
{
public:
    CommissionEmployee(const string &, const string &, const string &,
                       double = 0.0, double = 0.0);

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

protected:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;
    double commissionRate;
};

#endif