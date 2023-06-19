#include <iostream>

using namespace std;

class Container
{
public:
    
    Container()
    {
        cout << "Container CONSTRUCTOR" << endl;
    }

    virtual double &operator[](int) = 0;
    virtual int size() const = 0;

     virtual ~Container()
    {
        cout << "Container DESTRUCTOR" << endl;
    }
};