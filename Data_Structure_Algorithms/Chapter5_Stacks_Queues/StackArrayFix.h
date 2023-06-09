#include "Stack.h"

template <typename E>
class StackArrayFix : public Stack<E>
{
public:
    StackArrayFix(int cap) : capacity{cap}
    {
        S = new E[capacity];
        t = -1;
    }

    ~StackArrayFix()
    {
        delete[] S;
    }

    void push(const E &e) throw(StackFull)
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

    void pop() throw(StackEmpty)
    {
        if (!empty())
        {
            t--;
        }
        else
            throw StackEmpty("empty stack");
    }

    const E &top() throw(StackEmpty)
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
