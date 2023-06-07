#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

template <typename E>
class ArrayStack
{
    enum
    {
        DEF_CAPACITY = 100
    };

public:
    ArrayStack(int cap = DEF_CAPACITY);
    ~ArrayStack();
    void push(const E &e);
    void pop();
    const E &top() const;
    int size() const;
    bool empty() const;

private:
    E elements[];
    int size;
    int capacity;
};
#endif
