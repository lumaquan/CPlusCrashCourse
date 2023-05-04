
#include <iostream>
#include <string>

using namespace std;

class MyClass
{

public:
    MyClass(int a) : val{a}
    {
        f = 0.0f;
        d = 3.1415;
    }

    int getVal() { return val; }

private:
    int val;
    float f;
    double d;
};

class MyDerivedClass : public MyClass
{
public:
    MyDerivedClass(int a) : MyClass(a) { m = 10; }

private:
    int m;
};

int main()
{

    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;

    int a = 10;
    int *pa = &a;
    cout << sizeof(pa) << endl;

    MyClass my{45};
    MyClass *pmy = &my;
    cout << sizeof(my) << endl;
    cout << sizeof(pmy) << endl;

    MyDerivedClass mdy{45};
    MyDerivedClass *pdmy = &mdy;
    cout << sizeof(mdy) << endl;
    cout << sizeof(pdmy) << endl;

    int *pp = NULL;
    cout << sizeof(NULL) << endl;


    cout << sizeof(wchar_t) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(signed char) << endl;
    cout << sizeof(unsigned char) << endl;
    cout << sizeof(char16_t) << endl;
    cout << sizeof(char32_t) << endl;

    string first;
    cin >> first;
    while(first  != "end")
    {
        cout << first << endl;
        cin >> first;
    }
    

    return 0;
}