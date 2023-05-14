#ifndef SALESPERSON_H
#define SALESPERSON_H

class SalesPerson
{
public:
    static const int MONTHS_PER_YEAR = 12;
    SalesPerson();
    void getSalesFromUser();
    void setSales(int, double);
    void printAnnualSales();

private:
    double totalAnnualSales();
    double sales[MONTHS_PER_YEAR];
};

#endif