#include "Stack.h"
#include <iostream>

template <typename E>
class StackArrayFix : public Stack<E>
{
public:
    StackArrayFix(int cap) : capacity{cap}, t{-1}
    {
        S = new E[capacity];
        std::cout << "StackArrayFix(int)<" << this << "> CONSTRUCTOR" << std::endl;
        std::cout << "StackArrayFix<t = " << t << ", capacity = " << capacity << ", S = " << S << ">" << std::endl;
        std::cout << "StackArrayFix<&t = " << &t << ", &capacity = " << &capacity << ", &S = " << &S << ">" << std::endl;
        std::cout << "StackArrayFix<" << capacity << "> ELEMENTS CREATED " << std::endl;
        std::cout << std::endl;
    }

    StackArrayFix(const StackArrayFix &stack) : capacity{stack.capacity}, t{stack.t}, S{new E[capacity]}
    {
        std::cout << "StackArrayFix(copy)<" << this << "> CONSTRUCTOR" << std::endl;
        std::cout << "StackArrayFix<t = " << t << ", capacity = " << capacity << ", S = " << S << ">" << std::endl;
        std::cout << "StackArrayFix<&t = " << &t << ", &capacity = " << &capacity << ", &S = " << &S << ">" << std::endl;
        std::cout << "StackArrayFix<" << capacity << "> ELEMENTS CREATED " << std::endl;
        for (int i = 0; i < stack.size(); i++)
        {
            S[i] = stack.S[i];
        }
    }

    ~StackArrayFix()
    {
        std::cout << "StackArrayFix<" << this << "> DESTRUCTOR" << std::endl;
        std::cout << "StackArrayFix<" << capacity << "> ELEMENTS DESTROYED " << std::endl;
        std::cout << std::endl;
        delete[] S;
    }

    StackArrayFix &operator=(const StackArrayFix &stack)
    {
        std::cout << "<" << this << "> operator=()" << std::endl;
        if (capacity != stack.capacity)
        {
            delete[] S;
            capacity = stack.capacity;
            S = new E[capacity];
        }
        t = stack.t;
        for (int i = 0; i < stack.size(); i++)
        {
            S[i] = stack.S[i];
        }
        return *this;
    }

    void push(const E &e) noexcept(false)
    {
        if (!full())
            S[++t] = e;
        else
            throw StackFull("full stack");
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
    int t;
    int capacity;
    E *S;

    template <typename U>
    friend std::ostream &operator<<(std::ostream &o, const StackArrayFix<U> &stack);
};

template <typename U>
std::ostream &operator<<(std::ostream &o, const StackArrayFix<U> &stack)
{
    o << "[";
    if (stack.t + 1 == 0)
    {
        o << "]";
        return o;
    }
    for (int i = 0; i < stack.t; i++)
    {
        o << stack.S[i] << ", ";
    }
    o << stack.S[stack.t] << "]";
    return o;
}