#include <cstdio>
#include <iostream>
#include <string>
#include <functional>
#include "Student.h"

using namespace std;

void processPeople(Person *people[], int n);
void processPerson(Person person);
void processPersonByRef(const Person &person);
void processPersonByPointer(Person *pointerToPerson);
void showMayorForPersons(Person *p[], int n);

int main()
{
    cout << "MAIN STARTS" << endl;

    cout << "CREATE PERSONS" << endl;
    Person person1;
    Person person2{"Luis", "123456"};
    cout << endl;
    cout << endl;

    processPerson(person1);
    processPerson(person2);
    cout << endl;
    cout << endl;

    processPersonByRef(person1);
    processPersonByRef(person2);
    cout << endl;
    cout << endl;

    processPersonByPointer(&person1);
    processPersonByPointer(&person2);
    cout << endl;
    cout << endl;

    cout << "CREATE STUDENTS" << endl;
    Student student1;
    Student student2{"Physics"};
    Student student3{"Nadia", "010101", "Mathematics", 2007};
    cout << endl;
    cout << endl;

    processPerson(student1);
    processPerson(student2);
    processPerson(student3);
    cout << endl;
    cout << endl;

    processPersonByRef(student1);
    processPersonByRef(student2);
    processPersonByRef(student3);
    cout << endl;
    cout << endl;

    processPersonByPointer(&student1);
    processPersonByPointer(&student2);
    processPersonByPointer(&student3);
    cout << endl;
    cout << endl;

    Person *people[5];
    people[0] = &person1;
    people[1] = &person1;
    people[2] = &student1;
    people[3] = &student2;
    people[4] = &student3;
    showMayorForPersons(people, 5); // testing dynamic casting
    cout << endl;
    cout << endl;
    
    cout << "MAIN ENDS" << endl;
    return 0;
}

void processPeople(Person *people[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        people[i]->print();
    }
}

void processPerson(Person person)
{
    cout << "processPerson(Person)" << endl;
    person.print();
}

void processPersonByRef(const Person &person)
{
    cout << "processPersonByRef(Person&)" << endl;
    person.print();
}

void processPersonByPointer(Person *person)
{
    cout << "processPersonByPointer(Person*)" << endl;
    person->print();
}

void showMayorForPersons(Person *p[], int n)
{
    cout << "dynamic casting " << endl;
    for (size_t i = 0; i < n; i++)
    {
        Student *sp = dynamic_cast<Student *>(p[i]);
        if (sp != NULL)
        {
            sp->changeMayor("paleontology");
            sp->print();
        }
        else
        {
            cout << "Could not cast " << i << "th element" << endl;
        }
    }
}