#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include "Date.h"

class Student : public Person
{
    const std::string NO_MAYOR = "NO_MAYOR";
    const int NO_YEAR = 1000;

public:
    Student();
    Student(std::string mayor);
    Student(std::string name, std::string id, std::string mayor, int year);
    virtual ~Student();
    void changeMayor(const std::string &newMayor);
    virtual void print() const;

private:
    std::string mayor;
    int gradYear;
    Date date;
    void constMsg()
    {
        std::cout << "mayor = " << mayor << ", year = " << gradYear << " Student CONSTRUCTOR runs " << std::endl;
    }
    void destMsg()
    {
        std::cout << "mayor = " << mayor << ", year = " << gradYear << " Student DESTRUCTOR runs " << std::endl;
    }
};

#endif