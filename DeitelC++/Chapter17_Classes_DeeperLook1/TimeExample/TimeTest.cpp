#include "Time.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    Time time;
    // it is possible to create object even if not all member functions are defined
    std::cout << "sizeof(time): " << sizeof(time) << std::endl;

    cout << RAND_MAX << endl; // RAND_MAX = 0x7fffffff;
    int hour = 0, minute = 0, second = 0;

    for (int i = 0; i < 100; i++)
    {
        hour = rand() % 24;
        minute = rand() % 60;
        second = rand() % 60;
        try
        {
            time.setTime(hour, minute, second);
            time.printStandard();
            time.printUniversal();
        }
        catch (invalid_argument &e)
        {
            cout << "Exception: " << e.what() << endl;
            cout << "hour = " << hour << ", minute = " << minute << ", second = " << second << endl;
        }
    }
    return 0;
}
