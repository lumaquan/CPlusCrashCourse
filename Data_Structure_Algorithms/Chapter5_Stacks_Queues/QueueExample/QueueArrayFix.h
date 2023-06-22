#pragma once
#include <iostream>

using namespace std;

template <typename E>
class QueueArrayFix : public Queue<E>
{
    QueueArrayFix(int cap) : capacity{cap}, f{0}, r{0}, n{0}, Q{new E[cap]}
    {
        cout << "QueueArrayFix()<" << this << ">" << endl;
    }

    ~QueueArrayFix() 
    {
        cout << "~QueueArrayFix()<" << this << ">" << endl;
    }



public:
private:
    int f;
    int r;
    int n;
    int capacity;
    E *Q;
};
