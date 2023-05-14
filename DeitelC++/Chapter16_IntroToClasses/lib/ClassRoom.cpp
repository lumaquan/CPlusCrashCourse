#include "ClassRoom.h"

ClassRoom::ClassRoom() {}

ClassRoom::ClassRoom(GradeBook gradeBook) : gradeBook{gradeBook}
{
}

GradeBook ClassRoom::getGradeBook()
{
    return gradeBook;
}