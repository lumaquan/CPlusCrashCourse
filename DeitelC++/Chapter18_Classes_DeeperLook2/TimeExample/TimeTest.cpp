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


    return 0;
}
