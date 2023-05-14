#include <cstdio>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{

    // The variable for an arrays is treated as a pointer
    int a[] = {0, 1, 2, 3, 4, 5};
    cout << a << endl;

    // Is possible to add ints to an array name and is a pointer too
    for (int i = 0; i < 7; i++)
    {
        cout << *(a + i) << endl;
    }

    // a pointer can be increased ++ 
    for (int *p = a, j = 0; j < 7; p++, j++)
    {
        cout << *p << endl;
    }

    // These are pointers to next elements in the array
    cout << a + 1 << endl;
    cout << a + 2 << endl;
    cout << a + 3 << endl;

    // concatenating strings, is not possible to multiply by numbers 
    string name = "Luis Mauricio";
    string surname = "Melendez Rosales";
    string complete = name + " " + surname;

    // We can for each character in a string
    for (char x : name)
    {
        cout << x;
    }
    cout << "\n"
         << endl;

    // We can get charaters by index in a string
    for (int i = 0; i < complete.length(); i++)
    {
        cout << complete[i];
    }
    cout << endl;

    // We update any entry in the string
    complete[2] = 'X';
    cout << complete << endl;

    // There is not limit checking for indices
    char x = complete[50];
    char y = complete[-1];
    cout << x << endl;
    cout << y << endl;

    auto val = name.c_str();
    cout << typeid(val).name() << endl;
    cout << typeid(string).name() << endl;

    // We can parse a string to an integer, double, float or long double
    string prompt = "Please introduce a number: ";
    string number; 
    cout << prompt << endl;
    number = "3.1416";
    double dd = stod(number);
    cout << dd << endl;

    // chars are signed in my iMac
    char big = -128;
    int ibig = big;
    cout << ibig << endl; 
    cout << big << endl;

    // only use char and assume positive values
    char c = 200;
    unsigned char uc = c;
    cout << c << endl;
    cout << uc << endl;




    return 0;
}
