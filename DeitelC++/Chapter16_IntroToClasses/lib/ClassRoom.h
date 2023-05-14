#include "GradeBook.h"

class ClassRoom
{
    public:

    ClassRoom();

    ClassRoom(GradeBook gradeBook);

    GradeBook getGradeBook();

    private:
    GradeBook gradeBook;
};