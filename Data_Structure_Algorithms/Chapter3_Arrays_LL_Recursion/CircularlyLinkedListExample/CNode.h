#ifndef CNODE_H
#define CNODE_H
#include <iostream>

typedef std::string Elem;
class CNode
{
    friend class CLinkedList;

    CNode()
    {
        std::cout << "CNode CONSTRUCTOR" << std::endl;
    }

    void print()
    {
        std::cout << "(" <<  e << ", " << next << ")";
    }

    ~CNode()
    {
        std::cout << "CNode DESTRUCTOR" << std::endl;
    }

    Elem e;
    CNode *next;
};

#endif