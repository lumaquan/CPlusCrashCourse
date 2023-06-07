#include "CLinkedList.h"
#include <stdexcept>
using namespace std;

CLinkedList::CLinkedList() : cursor(NULL)
{
    cout << "CLinkedList CONSTRUCTOR" << endl;
}

CLinkedList::~CLinkedList()
{
    cout << "CLinkedList DESTRUCTOR" << endl;
    while (!empty())
    {
        remove();
    }
}

void CLinkedList::advance()
{
    cursor = cursor->next;
}

void CLinkedList::add(const Elem &e)
{
    CNode *n = new CNode();
    n->e = e;
    if (empty())
    {
        n->next = n;
        cursor = n;
    }
    else
    {
        n->next = cursor->next;
        cursor->next = n;
    }
}

void CLinkedList::remove()
{
    if (!empty())
    {
        CNode *old = cursor->next;
        if (old == cursor)
        {
            cursor = NULL;
        }
        else
        {
            cursor->next = old->next;
        }

        delete old;
    }
    else
        throw logic_error("Impossible to remove from an empty list");
}

bool CLinkedList::empty() const
{
    return cursor == NULL;
}

Elem CLinkedList::front() const
{
    if (!empty())
    {
        return cursor->next->e;
    }
    else
        throw logic_error("List is empty");
}

Elem CLinkedList::back() const
{
    if (!empty())
    {
        return cursor->e;
    }
    else
        throw logic_error("List is empty");
}

void CLinkedList::print() const
{
    cout << "[";
    if (empty())
    {
        cout << "]";
        return;
    }
    CNode *current = cursor->next;
    while (current != cursor)
    {
        current->print();
        cout << "<" << current << ">";
        current = current->next;
        if (current != cursor)
        {
            cout << ", ";
        }
    }
    current->print();
    cout << "<" << current << ">";
    cout << "]";
}

ostream &operator<<(ostream &out, const CLinkedList &cll)
{
    cll.print();
    return out;
}