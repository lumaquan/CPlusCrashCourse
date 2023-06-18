#ifndef STACK_H
#define STACK_H
#include "StackEmpty.h"
#include "StackFull.h"
#include <iostream>

template <typename E>
class Stack
{
public:
    Stack()
    {
        std::cout << "Stack<" << this << "> CONSTRUCTOR" << std::endl;
        std::cout << std::endl;
    }

    virtual ~Stack()
    {
        std::cout << "Stack<" << this << "> DESTRUCTOR" << std::endl;
        std::cout << std::endl;
    }

    virtual void push(const E &e) noexcept(false) = 0;
    virtual void pop() noexcept(false) = 0;
    virtual const E &top() noexcept(false) = 0;
    virtual int size() const = 0;
    virtual bool empty() const = 0;
};
#endif
