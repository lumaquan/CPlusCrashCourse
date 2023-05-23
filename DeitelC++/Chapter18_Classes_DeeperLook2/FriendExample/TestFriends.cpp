#include <iostream>
#include "Count.h"

using namespace std;

int main()
{
    const Count count;
    count.print();
    Count count2;
    setX(count2, 89); // cannot reference a const object using a nonconst reference
    count2.print();   // version nonconst of print;
    return 0;
}