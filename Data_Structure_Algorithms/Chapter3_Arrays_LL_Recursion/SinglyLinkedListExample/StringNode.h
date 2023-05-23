#ifndef STRINGNODE_H
#define STRINGNODE_H
#include <string>

class StringNode
{
friend class SinglyLinkedList;

private:
    std::string data;
    StringNode *next;
};

#endif