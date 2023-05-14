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
    void setAge(int age)
    {
        this->age = age;
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
        e = Entrance{5}; // Object creation without a variable in front
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


    Entrance e1{1};
    Entrance e2 = e1;  // Creates another object e2 is not a reference 
    Entrance& e3 = e1; // Does not create a new object, e3 refers to same object as e1
    e2.setAge(34);
    e3.setAge(89);
    cout << e1.getAge() << endl;
    cout << e2.getAge() << endl;
    return 0;
}
