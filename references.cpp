#include <cstdio>
#include <iostream>

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

    return 0;
}
