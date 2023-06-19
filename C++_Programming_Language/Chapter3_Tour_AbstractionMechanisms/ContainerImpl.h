#include "Container.h"
#include <iostream>

using namespace std;

class ContainerImpl : public Container
{

public:
    ContainerImpl(int s = 10) : sz{s}
    {
        cout << "ContainerImpl(s) CONSTRUCTOR" << endl;
        val = 3.1416;
    }

    int size() const
    {
        return sz;
    };

    double &operator[](int)
    {
        return val;
    }

    ~ContainerImpl()
    {
        cout << "ContainerImpl DESTRUCTOR" << endl;
    }

private:
    int sz;
    double val;
};
