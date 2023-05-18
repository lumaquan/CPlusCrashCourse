#include "Person.h"

using namespace std;

Person::Person()
{
    id = NO_ID;
    name = NO_NAME;
    constMsg();
}

Person::Person(const Person &person)
{
    id = person.id;
    name = person.name;
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
    cout << "PRINT PERSON: name = " << name << ", id = " << id << endl;
}

string Person::getName() const
{
    return name;
}