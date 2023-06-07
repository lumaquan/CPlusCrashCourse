#ifndef STACK_H
#define STACK_H
#include "StackEmpty.h"
#include "StackFull.h"
#include <iostream>

template <typename E>
class Stack
{
public:
    virtual void push(const E &e) throw(StackFull) = 0;
    virtual void pop() throw(StackEmpty) = 0;
    virtual const E &top() throw(StackEmpty) = 0;
    virtual int size() const = 0;
    virtual bool empty() const = 0;
};
#endif
