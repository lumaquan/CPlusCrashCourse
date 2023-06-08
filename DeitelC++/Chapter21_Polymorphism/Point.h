#include <iostream>

using namespace std;

class Point
{
public:
    Point(int x = 0, int y = 0)
    {/* 
        cout << "Point"
             << "< " << this << ">"
             << " CONSTRUCTOR" << endl;
     */}
    ~Point()
    {/* 
        cout << "Point"
             << "< " << this << ">"
             << " DESTRUCTOR" << endl;
     */}

private:
    int x;
    int y;
};