#include <iostream>

using namespace std;

template <class T>
T abs(T a) { return a < 0 ? -a : a; }

extern int a;
extern int a; // you can declare things more than once

void doSom();
void doSom(); // you can declare things more than once

void other() // redefinition of functions is not allowed
{
}

struct Date; // we can put a declaration anywhere
struct Date
{
    int m;
    int d;
    int y;
};

int main()
{
    cout << "program starts" << endl;
    cout << abs(-8) << endl;
    Date today;
    today.m = 5;
    today.d = 18;
    today.y = 2023;

    const char *not_modifiable_name = "Luis";
    char *modifiable_name = "Marmota";
    char modifiable_array[] = {'M', 'a', 'm', 'a'};

    // not_modifiable_name[0] = 'a';  NOT ALLOWED
    // modifiable_name[0] = 'P'; AND EXCEPTION IS RAISED HERE
    modifiable_array[0] = 'P';
    cout << modifiable_array << endl;

    int c;
    const int *p, a = 10, &b = c;
}