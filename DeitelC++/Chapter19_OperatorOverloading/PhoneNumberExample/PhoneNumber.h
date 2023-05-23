#ifndef PHONE_NUMBER_H
#define PHONE_NUMBER_H

#include <string>
#include <iostream>

using namespace std;

class PhoneNumber
{
    friend ostream &operator<<(ostream &, const PhoneNumber &);
    friend istream &operator>>(istream &, PhoneNumber &);

private:
    string areaCode = "000";
    string exchange = "000";
    string line = "0000";
};

#endif