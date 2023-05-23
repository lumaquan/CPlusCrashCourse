#ifndef COUNT_H
#define COUNT_H

class Count
{

    friend void setX(Count &c, int v);

public:
    Count();
    void print() const;
    void print();

private:
    int x;
};

#endif