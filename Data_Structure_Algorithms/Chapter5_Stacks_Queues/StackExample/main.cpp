#include <iostream>
#include <stack>
#include "StackOneElement.h"
#include "StackArrayFix.h"
#include "StackLinkedList.h"
#include <stack>
#include <vector>
#include "Util.h"

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

    cout << endl;
    cout << "StackArrayFix<double> stack1(7): " << endl;
    StackArrayFix<double> stack1(7);
    stack1.push(3.14);
    stack1.push(4.14);
    stack1.push(5.14);
    cout << "stack1 = " << stack1 << endl;

    cout << endl;
    cout << "StackArrayFix<double> stack2(2): " << endl;
    StackArrayFix<double> stack2(2);
    stack2.push(1.0);
    stack2.push(2.0);
    cout << "stack2 = " << stack2 << endl;
    cout << "stack2 = stack1 " << endl;
    stack2 = stack1;
    cout << "stack2 = " << stack2 << endl;

    cout << endl;
    cout << "StackArrayFix<double> stack3{stack1}: " << endl;
    StackArrayFix<double> stack3{stack1};
    cout << "stack3 = " << stack3 << endl;

    
    vector<int> vi = {1,2,3,4};
    printStdVector(vi);
    reverse(vi);
    printStdVector(vi);

    cout << " MAIN ENDS " << endl;
}