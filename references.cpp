#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

class Clock
{

public:
    Clock()
    {
        year = 2000;
    }

    void add_year()
    {
        year++;
    }

    int get_year()
    {
        return year;
    }

private:
    int year;
};

void increase(int& v);

int main()
{

    int *pti;
    int a = 10;
    pti = &a;
    printf("%p\n", pti);

    Clock clock;
    clock.add_year();
    Clock *pclock = &clock;
    cout << pclock->get_year() << endl;

    int arr[]{1, 23, 5};
    int *parr = arr;

    int b = 100;
    int& rb = b;
    increase(rb);
    cout << b << endl;


    return 0;
}

void increase(int& v)
{
    v++;
}
