#pragma once
#include <iostream>

using namespace std;

template <typename E>
class Queue
{
public:
    Queue()
    {
        cout << "Queue()<" << this << ">" << endl;
    }
    virtual ~Queue()
    {
        cout << "~Queue()<" << this << ">" << endl;
    }

    virtual bool empty() const = 0;
    virtual int size() const = 0;
    virtual const E &front() const noexcept(false) = 0;
    virtual void enqueue(const E &) noexcept(false) = 0;
    virtual void dequeue() noexcept(false) = 0;
};