#include <iostream>
#include <vector>
#include "../Util.h"
#include "../StackExample/StackLinkedList.h"

int main()
{
    vector<int> v{4, 7, 9, 11, 21};
    printStdVector(v);
    reverse(new StackLinkedList<int>(), v);
    printStdVector(v);
}