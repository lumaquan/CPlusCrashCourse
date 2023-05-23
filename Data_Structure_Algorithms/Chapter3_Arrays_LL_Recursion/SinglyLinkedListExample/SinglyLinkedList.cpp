#include "SinglyLinkedList.h"
#include <iostream>

SinglyLinkedList::SinglyLinkedList() : head(NULL)
{
}

SinglyLinkedList::~SinglyLinkedList()
{
    std::cout << "SinglyLinkedList DESCTRUCTOR RUNNING" << std::endl;
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
    std::cout << "SinglyLinkedList adding to front: " << e << std::endl;
    StringNode *node = new StringNode();
    node->data = e;
    node->next = head;
    head = node;
}

void SinglyLinkedList::removeFront()
{
    std::cout << "SinglyLinkedList removing from front: " << front() << std::endl;
    StringNode *old = head;
    head = old->next;
    delete old;
}