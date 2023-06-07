#include <iostream>
#include <stack>
#include "StackOneElement.h"

using namespace std;

void printStack(stack<int> &stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main()
{
    StackOneElement<double> mDStack;
    Stack<double> *p = &mDStack;

    try
    {
        p->pop();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        p->top();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    p->push(13.45);
    cout << p->top() << endl;
    p->pop();
    cout << p->empty() << endl;

    try
    {
        p->push(23.11);
        p->push(34.222);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    cout << "MAIN ENDS" << endl;
}