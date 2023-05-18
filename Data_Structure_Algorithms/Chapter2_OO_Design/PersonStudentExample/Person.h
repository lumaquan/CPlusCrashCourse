#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

class Person
{
    const std::string NO_ID = "NO_ID";
    const std::string NO_NAME = "NO_NAME";

public:
    Person();
    Person(const Person &person);
    Person(std::string name, std::string id);
    virtual ~Person();
    virtual void print() const;
    std::string getName() const;

private:
    void constMsg()
    {
        std::cout << "id = " << id << ", name = " << name << " Person CONSTRUCTOR runs " << std::endl;
    }
    void destMsg()
    {
        std::cout << "id = " << id << ", name = " << name << " Person DESTRUCTOR runs " << std::endl;
    }

protected:
    std::string name;
    std::string id;
};

#endif