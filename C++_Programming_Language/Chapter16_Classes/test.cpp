#include <iostream>

using namespace std;

class Date
{

    friend ostream &operator<<(ostream &out, Date &date);

public:
    Date(int y = 2000, int m = 1, int d = 1) : y{y}, m{m}, d{d}
    {
        cout << "constructor: " << *this << endl;
    }

    ~Date()
    {
        cout << "destructor: " << *this << endl;
    }
    int y;
    int m;
    int d;
};

ostream &operator<<(ostream &out, Date &date)
{
    out << date.y << ", " << date.m << ", " << date.d;
    return out;
}

void processADate(Date date)
{
    cout << "process date: " << date << endl;
}

void processARefDate(Date &date)
{
    cout << "process a ref date: " << date << endl;
}

int main()
{
    Date today{2009, 5, 3};
    Date copy = today;
    Date birth{1977, 9, 22};
    processADate(birth);
    cout << endl;
    Date nadias = {1979, 4, 19};
    processARefDate(nadias);
    cout << endl;
}