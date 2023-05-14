#include <iostream>

using namespace std;

void square(const int &val)
{
    cout << val*val << endl;
}

int main()
{

    int x = 10;
    int& y = x;
    square(15);
}