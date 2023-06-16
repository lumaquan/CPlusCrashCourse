#ifndef SNODE_H
#define SNODE_H

template <typename E>
class SNode
{

    template <typename U> // can be any parameter;
    friend class SLinkedList; // we cannot force SLinkedList<E> be a friend of SNode<E>

    SNode()
    {
        std::cout << "SNode<" << this << "> CONSTRUCTOR: e = " << e << std::endl;
    }

    ~SNode()
    {
        std::cout << "SNode<" << this << "> DESTRUCTOR" << std::endl;
    }

    E e;
    SNode *next;
};
#endif