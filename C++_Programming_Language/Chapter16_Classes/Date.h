#include <iostream>

using namespace std;

class Date
{
    friend ostream &operator<<(ostream &out, Date &date);

public:
    Date(int d, int m, int y) : d{d}, m{m}, y{y}
    {
        cout << "Date(d,m,y)<" << this << "> CONSTRUCTOR" << endl;
    }

    Date(int d, int m) : d{d}, m{m}
    {
        cout << "Date(d,m)<" << this << "> CONSTRUCTOR" << endl;
    }

    Date(int d) : d{d}
    {
        cout << "Date(d)<" << this << "> CONSTRUCTOR" << endl;
    }

    Date()
    {
        cout << "Date()<" << this << "> CONSTRUCTOR" << endl;
    }

    ~Date()
    {
        cout << "~Date<" << this << ">" << endl;
    }

private:
    int d{1};
    int m{1};
    int y{2000};
};

ostream &operator<<(ostream &out, Date &date)
{
    out << date.d << "/" << date.m << "/" << date.y;
    return out;
}