#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "StringNode.h"

class SinglyLinkedList
{
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    bool empty() const;
    const std::string &front() const;
    void addFront(const std::string &e);
    void removeFront();

private:
    StringNode *head;
};

#endif