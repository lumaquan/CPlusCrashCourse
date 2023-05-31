#ifndef DLINKED_LIST_H
#define DLINKED_LIST_H
#include "DNode.h"

class DLinkedList
{

    friend std::ostream &operator<<(std::ostream &out, const DLinkedList &dll);

public:
    DLinkedList(/* args */);
    ~DLinkedList();
    void addFront(const Elem &e);
    void addBack(const Elem &e);
    void removeFront();
    void removeBack();

    bool empty() const;
    const Elem &front() const;
    const Elem &back() const;
    void print() const;

private:
    DNode *header;
    DNode *trailer;

protected:
    void add(DNode *v, const Elem &e);
    void remove(DNode *v);
};
#endif