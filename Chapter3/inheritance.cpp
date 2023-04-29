#include <cstdio>
#include <iostream>
#include <string>
#include <functional>

using namespace std;

class Person
{
public:
    Person()
    {
        // cout << "Constructing a Person ()" << endl;
    }

    Person(string name, string id) : name(name), id(id)
    {
        // cout << "Constructing a Person (" << name << ", " << id << ")" << endl;
    }

    virtual ~Person()
    {
        // cout << "Destructing a Person: " << name << endl;
    }

    virtual void print();

    string getName() const
    {
        return name;
    }

private:
    string name;
    string id;
};

void Person::print()
{
    cout << "person name = " << name << ", person id = " << id << endl;
}

// Student definition

class Student : public Person
{

public:
    Student()
    {
        // cout << "Constructing a Student ()" << endl;
    }

    Student(string mayor) : mayor{mayor}
    {
        // cout << "Constructing a Student (" << mayor << ")" << endl;
    }

    Student(string name, string id, string mayor, int year) : Person(name, id), mayor{mayor}, gradYear{year}
    {
        // cout << "Constructing a Student (" << name << ", " << id << ", " << mayor << ", " << year << ")" << endl;
    }

    virtual ~Student()
    {
        // cout << "Destructing a Student: " << Person::getName() << endl;
    }

    void changeMayor(const string &newMayor)
    {
        this->mayor = newMayor;
    }

    virtual void print()
    {
        Person::print();
        cout << "mayor = " << mayor << ", Year = " << gradYear << endl;
    }

private:
    string mayor;
    int gradYear;
};

void usesStudent(Student student)
{
    student.print();
}

void processPeople(Person *a[], int len)
{
    for (size_t i = 0; i < len; i++)
    {
        a[i]->print();
    }
}

int main()
{

    Person person{"Luis", "1"};
    Student student{"Nadia", "2", "Math", 2020};
    Person p;
    Student s{"Electrodynamics"};
    Student *ss = new Student("Biology");

    Person *people[10];
    people[0] = &person;
    people[1] = &student;
    people[2] = &p;
    people[3] = &s;
    people[4] = ss;

    processPeople(people, 5);

    delete ss;

    return 0;
}