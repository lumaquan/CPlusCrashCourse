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
        std::cout << std::endl;
    }

    void push(const E &e) noexcept(false)
    {
        S.addFront(e);
        n++;
    }

    void pop() noexcept(false)
    {
        if (!empty())
        {
            S.removeFront();
            n--;
        }
        else
            throw StackEmpty("Empty stack!!");
    };

    const E &top() noexcept(false)
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
    SNode<E> e;
};

template <typename E>
StackLinkedList<E>::StackLinkedList() : n{0}
{
    std::cout << "StackLinkedList<" << this << "> CONSTRUCTOR" << std::endl;
    std::cout << "StackLinkedList<n = " << n << ">" << std::endl;
    std::cout << "StackLinkedList<&n = " << &n << ", &S = " << &S << ">" << std::endl;
    std::cout << "StackLinkedList<&e = " << &e << ">" << std::endl;
    std::cout << std::endl;
}

template <typename E>
int StackLinkedList<E>::size() const
{
    return n;
}

#endif