#include <iostream>
#include <stack>
#include "StackOneElement.h"
#include "StackArrayFix.h"

using namespace std;

int main()
{
    StackArrayFix<double> stack(30);

    try
    {
        stack.pop();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    double x = 1.0;
    while (!stack.full())
    {
        stack.push(++x);
    }


    try
    {
        stack.push(0.0);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }


}