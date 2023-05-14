#include "GradeBook.h"
#include <iostream>

using namespace std;

GradeBook::GradeBook(string courseName)
{
    course = courseName;
}

void GradeBook::setCourseName(string courseName)
{
    this->course = courseName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for " << getCourseName() << "!" << endl;
}

string GradeBook::getCourseName() const { return course; }
