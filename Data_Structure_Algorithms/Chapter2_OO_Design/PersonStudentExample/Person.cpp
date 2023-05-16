#include "Person.h"

using namespace std;

Person::Person()
{
    id = NO_ID;
    name = NO_NAME;
    constMsg();
}

Person::Person(string name, string id) : name(name), id(id)
{
    constMsg();
}

Person::~Person()
{
    destMsg();
}

void Person::print() const
{
    cout << "PRINT: name = " << name << ", id = " << id << endl;
}

string Person::getName() const
{
    return name;
}