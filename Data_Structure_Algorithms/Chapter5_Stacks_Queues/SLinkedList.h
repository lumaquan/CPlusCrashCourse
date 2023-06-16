#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H
#include "SNode.h"
#include <iostream>

template <typename E>
class SLinkedList
{

public:
    SLinkedList() : head{nullptr}
    {
        std::cout << "SLinkedList<" << this << "> CONSTRUCTOR: head = " << head << std::endl;
    }

    ~SLinkedList()
    {
        std::cout << "SLinkedList<" << this << "> DESTRUCTOR" << std::endl;
        while (!empty())
        {
            removeFront();
        }
    }

    void removeFront()
    {
        SNode<E> *old = head;
        head = old->next;
        delete old;
    }

    const E &front() const
    {
        return head->e;
    }

    bool empty() const
    {
        return head == nullptr;
    }

    void addFront(const E &e)
    {
        SNode<E> *n = new SNode<E>();
        n->e = e;
        n->next = head;
        head = n;
    }

private:
    SNode<E> *head;
};
#endif