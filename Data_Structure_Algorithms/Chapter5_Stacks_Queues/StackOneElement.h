#include "Stack.h"

template <typename E>
class StackOneElement :public Stack<E>
{
public:
    void push(const E &e) throw(StackFull)
    {
        if (!empty())
        {
            throw StackFull("full stack");
        }
        else
        {
            this->e = e;
            emp = false;
        }
    }

    void pop() throw(StackEmpty)
    {
        if (!empty())
        {
            emp = true;
        }
        else
            throw StackEmpty("empty stack");
    }

    const E &top() throw(StackEmpty)
    {
        if (!empty())
            {
                return e;
            }
        else
            throw StackEmpty("Empty stack");
    }

    int size() const
    {
        if (emp)
            return 0;
        return 1;
    }
    bool empty() const
    {
        return emp;
    }

private:
    E e;
    bool emp;
};
