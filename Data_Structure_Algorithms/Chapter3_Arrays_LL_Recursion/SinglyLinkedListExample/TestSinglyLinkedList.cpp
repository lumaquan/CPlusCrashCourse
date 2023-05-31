#include "SinglyLinkedList.h"

using namespace std;

int main()
{
    SinglyLinkedList list;
    string luis = "luis";
    string nadia = "nadia";
    string jose = "jose";
    list.addFront(luis);
    list.addFront(nadia);
    list.addFront(jose);
    list.addFront("");
    SinglyLinkedList list2;
    list2.addFront("one");
    list2.addFront("two");
    list2.addFront("three");
    cout << list << endl;
    cout << list2 << endl;
    list.removeFront();
    list2.removeFront();
    list2.removeFront();
    cout << list << endl;
    cout << list2 << endl;
    cout << endl;
}
