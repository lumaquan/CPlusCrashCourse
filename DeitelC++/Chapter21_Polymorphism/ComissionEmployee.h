#ifndef COMMISSION_EMPLOYEE_H
#define COMMISSION_EMPLOYEE_H
#include <string>
#include "Point.h"


class CommissionEmployee
{
public:
    CommissionEmployee(const std::string &, const std::string &, const std::string &,
                       double = 0.0, double = 0.0);
    virtual ~CommissionEmployee();

    void setFirstName(const std::string &);
    void setLastName(const std::string &);
    void setSocialSecurityNumber(const std::string &);
    void setGrossSales(double);
    void setCommissionRate(double);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getSocialSecurityNumber() const;
    double getCommissionRate() const;
    double getGrossSales() const;
    virtual double earnings() const;
    virtual void print() const;

private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSales;
    double commissionRate;
    Point p;
};

#endif