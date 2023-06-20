#include <iostream>
#include <vector>

using namespace std;

class Date
{

public:
    Date(int d, int m, int y) : d{d}, m{m}, y{y}
    {
        cout << "Date()<" << this << ">" << endl;
    }

    Date(const Date &date)
    {
        d = date.d;
        m = date.m;
        y = date.y;
    }

    ~Date()
    {
        cout << "~Date()<" << this << ">" << endl;
    }

    int day() const;
    int month() const;
    int year() const;

    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

    bool yearQueried() const
    {
        return year_queried;
    }

    friend ostream &operator<<(ostream &out, const Date &date);

private:
    int d;
    int m;
    int y;
    vector<Date> relatedDates;
    mutable bool year_queried = false;
};

int Date::day() const
{
    return d;
}

int Date::month() const
{
    return m;
}

int Date::year() const
{
    year_queried = true;
    return y;
}

void Date::setDay(int dd)
{
    d = dd;
}
void Date::setMonth(int mm)
{
    m = mm;
}
void Date::setYear(int yy)
{
    y = yy;
    year_queried = false;
}

ostream &operator<<(ostream &out, const Date &date)
{
    out << date.d << "/ " << date.m << "/" << date.y << endl;
    return out;
}