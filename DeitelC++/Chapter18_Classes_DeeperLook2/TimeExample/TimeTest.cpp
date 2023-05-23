#include "Time.h"
#include <iostream>

using namespace std;

int main()
{

    Time wakeUp{6, 45, 0};
    const Time noon{12, 0, 0};

    wakeUp.printUniversal();
    noon.printUniversal();

    wakeUp.setHour(7);
    wakeUp.getHour(),
        wakeUp.printStandard();
    wakeUp.printUniversal();

    cout << noon.getHour() << endl;
    cout << noon.getMinute() << endl;

    // Testing cascading of member function calls;
    cout << "Testing cascading" << endl;
    Time today;
    today.setHour(13)
        .setMinute(45)
        .setSecond(33); // pretty useful to construct complex objects.
    today.printStandard();

    return 0;
}
