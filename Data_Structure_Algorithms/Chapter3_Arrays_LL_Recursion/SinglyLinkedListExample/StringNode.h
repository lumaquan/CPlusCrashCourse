#ifndef STRINGNODE_H
#define STRINGNODE_H
#include <string>
#include <iostream>

class StringNode
{
    friend class SinglyLinkedList;

    StringNode()
    {
        std::cout << "StringNode CONSTRUCTOR" << std::endl;
    }

    StringNode(std::string data, StringNode *next) : data{data}, next{next}
    {
        std::cout << "StringNode(string, StringNode*) CONSTRUCTOR" << std::endl;
    }

    void print()
    {
        std::cout << "(" << data << ", " << next << ")";
    }

    ~StringNode()
    {
        std::cout << "StringNode DESTRUCTOR" << std::endl;
    }

private:
    std::string data;
    StringNode *next;
};

#endif