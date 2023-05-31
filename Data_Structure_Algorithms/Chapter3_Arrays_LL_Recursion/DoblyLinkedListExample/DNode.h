#ifndef DNODE_H
#define DNODE_H
#include <iostream>

typedef std::string Elem;

class DNode
{
    friend class DLinkedList;

public:
    DNode()
    {
        std::cout << "DNode CONSTRUCTOR" << std::endl;
    }

    void print()
    {
        std::cout << "(" << previous << ", " << e << ", " << next << ")";
    }

    ~DNode()
    {
        std::cout << "DNode DESTRUCTOR" << std::endl;
    }

private:
    Elem e;
    DNode *previous;
    DNode *next;
};

#endif
