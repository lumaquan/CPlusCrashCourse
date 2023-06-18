#ifndef SNODE_H
#define SNODE_H

template <typename E>
class SNode
{

    template <typename U> // can be any parameter;
    friend class SLinkedList; // we cannot force SLinkedList<E> be a friend of SNode<E>

    template <typename W>
    friend class StackLinkedList;

    SNode()
    {
        std::cout << "SNode<" << this << "> CONSTRUCTOR" << std::endl;
        std::cout << "SNode<e = " << e << ", next = " << next << ">" << std::endl;
        std::cout << "SNode<&e = " << &e << ", &next = " << &next << ">" << std::endl;
        std::cout << std::endl;
    }

    ~SNode()
    {
        std::cout << "SNode<" << this << "> DESTRUCTOR" << std::endl;
        std::cout << std::endl;
    }

    E e;
    SNode *next;
};
#endif