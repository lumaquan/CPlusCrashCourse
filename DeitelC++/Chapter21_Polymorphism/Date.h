#include <iostream>

using namespace std;

class Date
{
public:
    Date(int m = 1, int d = 1, int year = 2000)
    {
        cout << "Date"
             << "< " << this << ">"
             << " CONSTRUCTOR" << endl;
    }
    ~Date()
    {
        cout << "Date"
             << "< " << this << ">"
             << " DESTRUCTOR" << endl;
    }

private:
    int month;
    int day;
    int year;
};