#ifndef DATE_H
#define DATE_H
class Date
{
public:
    static const int monthsPerYear = 12;
    Date(int = 1, int = 1, int = 1900);
    Date(const Date &date);
    void print() const;
    ~Date();

private:
    int month;
    int day;
    int year;
    int checkDay(int) const;
};

#endif