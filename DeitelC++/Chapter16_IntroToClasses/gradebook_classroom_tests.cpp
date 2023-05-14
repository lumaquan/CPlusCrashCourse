#include "lib/ClassRoom.h"
#include <iostream>

using namespace std;

int main()
{
    GradeBook gradeBook("Quantum Mechanics I");
    cout << gradeBook.getCourseName() << endl;

    GradeBook gradeBook1{"Quantum Mechanics II"};
    cout << gradeBook1.getCourseName() << endl;

    GradeBook gradeBook2 = {"Quantum Mechanics III"};
    cout << gradeBook2.getCourseName() << endl;

    ClassRoom classroom{gradeBook};
    cout << classroom.getGradeBook().getCourseName() << endl;

    ClassRoom classroom1;
    cout << classroom1.getGradeBook().getCourseName() << endl;
    return 0;
}
