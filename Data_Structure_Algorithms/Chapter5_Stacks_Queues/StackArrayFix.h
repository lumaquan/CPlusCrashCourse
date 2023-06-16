#include "Stack.h"
#include <iostream>

template <typename E>
class StackArrayFix : public Stack<E>
{   
public:
    StackArrayFix(int cap) : capacity{cap}
    {
        std::cout << "StackArrayFix<" << this << "> CONSTRUCTOR" << std::endl;
        std::cout << "t = " << t << ", capacity = " << capacity << ", S = " << &S << std::endl;
        std::cout << capacity <<  " ELEMENTS CREATED " << std::endl;
        S = new E[capacity];
        t = -1;
    }

    ~StackArrayFix()
    {
        std::cout << "StackArrayFix<" <<  this <<  "> DESTRUCTOR" << std::endl;
        std::cout << capacity <<  " ELEMENTS DESTROYED " << std::endl;
        delete[] S;
    }

    void push(const E &e) noexcept(false)
    {
        if (full())
        {
            throw StackFull("full stack");
        }
        else
        {
            S[++t] = e;
        }
    }

    void pop() noexcept(false)
    {
        if (!empty())
        {
            t--;
        }
        else
            throw StackEmpty("empty stack");
    }

    const E &top() noexcept(false)
    {
        if (!empty())
        {
            return S[t];
        }
        else
            throw StackEmpty("Empty stack");
    }

    int size() const
    {
        return t + 1;
    }
    bool empty() const
    {
        return t + 1 == 0;
    }
    bool full()
    {
        return t + 1 == capacity;
    }

private:
    E *S;
    int t;
    int capacity;
};
