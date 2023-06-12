#ifndef STACK_LINKED_LIST_H
#define STACK_LINKED_LIST_H
#include "Stack.h"
#include "SLinkedList.h"

template <typename E>
class StackLinkedList : public Stack<E>
{
public:
    StackLinkedList();

    ~StackLinkedList()
    {
        std::cout << "StackLinkedList<" << this << "> DESTRUCTOR" << std::endl;
    }

    void push(const E &e) throw(StackFull)
    {
        S.addFront(e);
        n++;
    }

    void pop() throw(StackEmpty)
    {
        if (!empty())
        {
            S.removeFront();
            n--;
        }
        else
            throw StackEmpty("Empty stack!!");
    };

    const E &top() throw(StackEmpty)
    {
        if (!empty())
        {
            return S.front();
        }
        else
            throw StackEmpty("Empty stack!!");
    }

    bool empty() const
    {
        return S.empty();
    }

    int size() const;

private:
    int n;
    SLinkedList<E> S;
};

template <typename E>
StackLinkedList<E>::StackLinkedList() : n{0}
{
    std::cout << "StackLinkedList<" << this << "> CONSTRUCTOR" << std::endl;
    std::cout << "n = " << n << ", linkedlist = " << &S << std::endl;
}

template <typename E>
int StackLinkedList<E>::size() const
{
    return n;
}

#endif