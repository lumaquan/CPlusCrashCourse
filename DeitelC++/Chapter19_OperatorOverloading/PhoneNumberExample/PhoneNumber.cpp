#include <iomanip>
#include "PhoneNumber.h"

using namespace std;


ostream &operator<<(ostream &out, const PhoneNumber &pn)
{
    out << "("<< pn.areaCode << ") " << pn.exchange <<"-"<< pn.line;
    return out;
}

istream &operator>>(istream & in, PhoneNumber & pn)
{
    in.ignore();
    in >> setw(3) >> pn.areaCode;
    in.ignore(2);
    in >> setw(3) >> pn.exchange;
    in.ignore();
    in >> setw(4) >> pn.line;
    return in;
}

