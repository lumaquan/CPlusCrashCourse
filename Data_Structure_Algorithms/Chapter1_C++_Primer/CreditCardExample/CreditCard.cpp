#include "CreditCard.h"

using namespace std;

CreditCard::CreditCard(const string &no, const string &nm, int lim, double bal)
{
    number = no;
    name = nm;
    balance = bal;
    limit = lim;
}

bool CreditCard::charge(double price)
{
    if (price + balance > limit)
    {
        return false;
    }
    else
    {
        balance += price;
    }
}

void CreditCard::makePayment(double payment)
{
    balance -= payment;
}

std::ostream &operator<<(std::ostream &out, const CreditCard &c)
{
    out << "Number = " << c.getNumber() << "\n";
    out << "Namer = " << c.getName() << "\n";
    out << "Balance = " << c.getBalance() << "\n";
    out << "Limit = " << c.getLimit() << "\n";
    return out; 
}