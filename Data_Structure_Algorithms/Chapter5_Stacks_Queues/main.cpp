#include <iostream>
#include <stack>
#include "StackOneElement.h"
#include "StackArrayFix.h"
#include "StackLinkedList.h"

using namespace std;

void testStack(Stack<double> *stackPtr, int size)
{
    try
    {
        stackPtr->pop();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    int i = 0;
    while (i < size)
    {
        stackPtr->push(3.1451 + i);
        i++;
    }

    cout << "size = "<< stackPtr->size() << endl;

    while (i > size / 2)
    {
        cout << stackPtr->top() << endl;
        stackPtr->pop();
        i--;
    }

    cout << "size = "<< stackPtr->size() << endl;

    try
    {
        stackPtr->pop();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    Stack<double> *stackPtrArr[2];
    stackPtrArr[0] = new StackArrayFix<double>(10);
    stackPtrArr[1] = new StackLinkedList<double>();
    testStack(stackPtrArr[0], 10);
    testStack(stackPtrArr[1], 20);

    delete stackPtrArr[0];
    delete stackPtrArr[1];
}