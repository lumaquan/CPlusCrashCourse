#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date
{

    friend std::ostream &operator<<(std::ostream &, const Date &);

public:
    Date(int = 1, int = 1, int = 1900);
    void setDate(int, int, int);
    Date &operator++();
    Date operator++(int);
    Date &operator+=(int);
    static bool leapYear(int);
    bool endOfMonth(int);

private:
    int month;
    int day;
    int year;
    static const int days[];
    void helpIncrement();
    bool helpValidDay(int);
};

#endif