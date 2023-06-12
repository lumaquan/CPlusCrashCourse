#ifndef SNODE_H
#define SNODE_H

template <typename E>
struct SNode
{
    SNode()
    {
        std::cout << "SNode<" << this << "> CONSTRUCTOR: e = " << e << std::endl;
    }

    ~SNode()
    {
        std::cout << "SNode<" << this << "> DESTRUCTOR" << std::endl;
    }

    E e;
    SNode<E> *next;
};

#endif