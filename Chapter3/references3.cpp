#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class Entrance
{

public:
    Entrance(int age) : age{age}
    {
        cout << "in Entrance constructor name = " << age << endl;
    }

    int getAge() const
    {
        return age;
    }

private:
    int age;
};

struct Avout
{

public:
    Avout(string name, long year) : name{name}, apert{year}, e{15}
    { // the initialization occurred before this call
        announce();
        name = "Nadia";
        e = Entrance{5};    // Object creation without a variable in front
        announce();
    }

    void announce() const
    {
        cout << "My name is  " << name << " and my next apert is" << apert << " and my age is " << e.getAge() << endl;
    }

private:
    string name;
    long apert;
    Entrance e;
};

int main()
{
    Avout avout{"Luis", 1999};
    avout.announce();

    auto aEntrance{Entrance{5}};  

    return 0;
}
