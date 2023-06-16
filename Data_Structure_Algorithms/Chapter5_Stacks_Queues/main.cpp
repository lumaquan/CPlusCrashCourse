#include <iostream>
#include <stack>
#include "StackOneElement.h"
#include "StackArrayFix.h"
#include "StackLinkedList.h"
#include <stack>

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
    while (i < size) // pushes max(size, stack capacity)
    {
        try
        {
            stackPtr->push(3.1451 + i);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        i++;
    }

    cout << "size = " << stackPtr->size() << endl;

    while (i > 0) // pops max(size, stack capacity)
    {
        try
        {
            cout << stackPtr->top() << endl;
            stackPtr->pop();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        i--;
    }

    cout << "size = " << stackPtr->size() << endl;
}

int main()
{
    Stack<double> *stackPtrArr[2];
    stackPtrArr[0] = new StackArrayFix<double>(8);
    stackPtrArr[1] = new StackLinkedList<double>();

    cout << "TEST STACK ARRAY: " << endl;
    testStack(stackPtrArr[0], 10);

    cout << "TEST STACK LINKED LIST: " << endl;
    testStack(stackPtrArr[1], 10);

    delete stackPtrArr[0];
    delete stackPtrArr[1];
    cout << " MAIN ENDS " << endl;
}