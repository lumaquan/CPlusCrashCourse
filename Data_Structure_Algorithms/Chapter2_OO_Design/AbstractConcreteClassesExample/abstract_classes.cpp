#include <iostream>

using namespace std;

class PureAbstract
{

public:
    PureAbstract(int x = 0) : x{x}
    {
    }
    virtual void doSomething() = 0;

private:
    int x;
};

class Concrete1 : public PureAbstract
{
public:
    void doSomething()
    {
        cout << "Concrete 1" << endl;
    }
};

class Concrete2 : public PureAbstract
{
public:
    void doSomething()
    {
        cout << "Concrete 2" << endl;
    }
};

class Concrete3 : public PureAbstract
{
public:
    void doSomething()
    {
        cout << "Concrete 3" << endl;
    }
};

int main()
{

    Concrete1 con1;
    con1.doSomething();
    Concrete2 con2;
    con2.doSomething();

    PureAbstract *pure1 = &con1;
    PureAbstract *pure2 = &con2;
    PureAbstract *pure3 = new Concrete3();

    pure1->doSomething();
    pure2->doSomething();
    pure3->doSomething();

    PureAbstract &pureR1 = con1;
    PureAbstract &pureR2 = con2;
    PureAbstract &pureR3 = *pure3;
    pureR1.doSomething();
    pureR2.doSomething();
    pureR3.doSomething();

    return 0;
}