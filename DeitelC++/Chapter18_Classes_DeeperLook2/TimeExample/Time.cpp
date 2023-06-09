#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second);
}

Time &Time::setTime(int h, int m, int s)
{
    setHour(h).setMinute(m).setSecond(s);
    cout << this << endl;
    return *this;
}

Time &Time::setHour(int h)
{
    if (h >= 0 && h < 24)
    {
        hour = h;
    }
    else
    {
        throw invalid_argument("hour must be 0-23");
    }
    cout << this << endl;
    return *this;
}

Time &Time::setMinute(int m)
{
    if (m >= 0 && m < 60)
    {
        minute = m;
    }
    else
    {
        throw invalid_argument("minute must be 0-59");
    }
    cout << this << endl;
    return *this;
}

Time &Time::setSecond(int s)
{
    if (s >= 0 && s < 60)
    {
        second = s;
    }
    else
    {
        throw invalid_argument("second must be 0-59");
    }
    cout << this << endl;
    return *this;
}

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
}

void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard() const
{
    cout << (getHour() == 0 || getHour() == 12 ? 12 : getHour() % 12) << ":"
         << setfill('0') << setw(2) << getMinute() << ":"
         << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}

const Time &Time::test()  const
{
    return *this;
}
