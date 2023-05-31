#include "SinglyLinkedList.h"
#include <iostream>

SinglyLinkedList::SinglyLinkedList() : head(NULL)
{
    std::cout << "SinglyLinkedList CONSTRUCTOR" << std::endl;
}

SinglyLinkedList::~SinglyLinkedList()
{
    std::cout << "SinglyLinkedList DESTRUCTOR" << std::endl;
    while (!empty())
    {
        removeFront();
    }
}

bool SinglyLinkedList::empty() const
{
    return head == NULL;
}

const std::string &SinglyLinkedList::front() const
{
    return head->data;
}

void SinglyLinkedList::addFront(const std::string &e)
{
    std::cout << "SinglyLinkedList addFront: " << e << std::endl;
    head = new StringNode(e, head);
}

void SinglyLinkedList::removeFront()
{
    std::cout << "SinglyLinkedList removeFront: " << front() << std::endl;
    StringNode *old = head;
    head = old->next;
    delete old;
}

void SinglyLinkedList::print() const
{
    StringNode *current = head;
    std::cout << "[";
    while (current != NULL)
    {
        current->print();
        std::cout << "<" << current << ">"; 
        if (current->next != NULL)
        {
            std::cout << ", ";
        }
        current = current->next;

    }
    std::cout << "]";
}

std::ostream &operator<<(std::ostream &out, const SinglyLinkedList &sll)
{
    sll.print();
    return out;
}