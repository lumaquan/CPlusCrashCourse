#include "DLinkedList.h"
#include <stdexcept>
using namespace std;

DLinkedList::DLinkedList()
{
    header = new DNode;
    trailer = new DNode;
    header->next = trailer;
    trailer->previous = header;
}

DLinkedList::~DLinkedList()
{
    while (!empty())
    {
        removeFront();
    }
    delete header;
    delete trailer;
}

void DLinkedList::addFront(const Elem &e)
{
    add(header->next, e);
}

void DLinkedList::addBack(const Elem &e)
{
    add(trailer, e);
}

void DLinkedList::removeFront()
{
    remove(header->next);
}

void DLinkedList::removeBack()
{
    remove(trailer->previous);
}

bool DLinkedList::empty() const
{
    return header->next == trailer;
}

const Elem &DLinkedList::front() const
{
    if (!empty())
    {
        return header->next->e;
    }
    else
        throw logic_error("Empty list");
}

const Elem &DLinkedList::back() const
{
    if (!empty())
    {
        return trailer->previous->e;
    }
    else
        throw logic_error("Empty list");
}

void DLinkedList::add(DNode *v, const Elem &e)
{
    DNode *u = new DNode;
    u->e = e;
    u->next = v;
    u->previous = v->previous;
    u->previous->next = u;
    v->previous = u;
}

void DLinkedList::remove(DNode *v)
{
    if (!empty())
    {
        v->previous->next = v->next;
        v->next->previous = v->previous;
        delete v;
    }
    else
        throw logic_error("Empty list");
}

void DLinkedList::print() const
{
    DNode *current = header->next;
    std::cout << "[";
    while (current != trailer)
    {
        current->print();
        std::cout << "<" << current << ">";
        if (current->next != trailer)
        {
            std::cout << std::endl;
        }
        current = current->next;
    }
    std::cout << "]";
}

std::ostream &operator<<(std::ostream &out, const DLinkedList &dll)
{
    dll.print();
    return out;
}