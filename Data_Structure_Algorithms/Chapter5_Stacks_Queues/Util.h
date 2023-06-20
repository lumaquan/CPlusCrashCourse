#pragma once

#include <iostream>
#include <vector>
#include "StackExample/Stack.h"

using namespace std;

template <typename E>
void printStdVector(const vector<E> &v)
{
    cout << "[";
    if (v.size() == 0)
    {
        cout << "]" << endl;
        return;
    }
    int i = 0;
    for (; i < v.size() - 1; i++)
    {
        cout << v[i] << ", ";
    }
    cout << v[i] << "]" << endl;
}

template <typename E>
void reverse(Stack<E> * ps, vector<E> &V)
{
    for (int i = 0; i < V.size(); i++)
    {
        ps->push(V[i]);
    }
    for (int i = 0; i < V.size(); i++)
    {
        V[i] = ps->top();
        ps->pop();
    }
}