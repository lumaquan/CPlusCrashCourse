#ifndef CLINKEDLIST_H
#define CLINKEDLIST_H
#include "CNode.h"

typedef std::string Elem;
class CLinkedList
{

    friend std::ostream &operator<<(std::ostream &out, const CLinkedList &cll);

public:
    CLinkedList();
    ~CLinkedList();

    void advance();
    void add(const Elem &e);
    void remove();

    bool empty() const;
    Elem front() const;
    Elem back() const;
    void print() const;

private:
    CNode *cursor;
};

#endif