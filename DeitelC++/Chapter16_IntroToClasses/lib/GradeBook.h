#include <string>

using namespace std;

class GradeBook
{
public:
    GradeBook(string courseName = "NO COURSE");

    void setCourseName(string courseName);

    void displayMessage() const;

    string getCourseName() const;

private:
    string course;
};