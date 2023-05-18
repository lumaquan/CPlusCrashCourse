#include "Student.h"

using namespace std;

Student::Student()
{
    mayor = NO_MAYOR;
    gradYear = NO_YEAR;
    constMsg();
}

Student::Student(string mayor) : mayor{mayor}
{
    gradYear = NO_YEAR;
    constMsg();
}

Student::Student(string name, string id, string mayor, int year) : Person(name, id), mayor{mayor}, gradYear{year}
{
    constMsg();
}

Student::~Student()
{
    destMsg();
}

void Student::changeMayor(const string &newMayor)
{
    this->mayor = newMayor;
}

void Student::print() const
{
    cout << "PRINT STUDENT: id = " << id << ", name  = " << name << ", mayor = " << mayor << ", year = " << gradYear << endl;
}