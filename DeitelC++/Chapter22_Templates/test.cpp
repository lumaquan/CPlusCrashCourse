
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template <typename T, typename U>
void doSomething(T t, U u)
{
    cout << t << ": " << typeid(t).name() << endl;
    cout << u << ": " << typeid(u).name() << endl;
}

class My
{
    friend ostream &operator<<(ostream &o, My &my)
    {
        o << "h";
        return o;
    }
};

void doSomething(int x, int y)
{
    cout << "x = " << x << ", y = " << y << endl;
}

int main()
{
    doSomething(8, 9);
    doSomething(4, "hola");
    doSomething(3.1416, string{"como que no "});
    doSomething(My{}, "hola");
}
