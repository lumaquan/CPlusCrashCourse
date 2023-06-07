
#include "CLinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    CLinkedList cll;
    cout << cll << endl;
    cll.add("Mexico");
    cll.add("Alemania");
    cll.add("Brasil");
    cout << cll << endl;   
}