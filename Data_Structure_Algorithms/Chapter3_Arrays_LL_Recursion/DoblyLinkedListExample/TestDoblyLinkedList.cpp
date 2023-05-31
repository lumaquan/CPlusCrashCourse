#include "DLinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "MAIN STARTS" << endl;
    DLinkedList list1;
    cout << list1 << endl;
    list1.addFront("luis");
    list1.addFront("carlos");
    list1.addBack("sofia");
    list1.removeFront();
    cout << list1 << endl;
    cout << "MAIN ENDS" << endl;
}
