
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

    int getVal() const { return val; }

    void setVal(int v) { val = v; }

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


// A reference without qualifier const can change the value of object reference my variable 
// passed in    
void operateOverMyClass(MyClass &my)
{
    cout << "operateOverMyClass: " << my.getVal() << endl;
    MyClass &d = my;
    d.setVal(100);    // it really changes value outside 
}

void operateOverConstMyClass(const MyClass &my)
{
    cout << "operateOverConstMyClass: " << my.getVal() << endl;
    // is not possible to declare a reference being capable of changing object passing in
    const MyClass &d = my;
    // only possible to create other const references to acces objects value
}

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

    // Unsafe code; pointer is not initialized to known location
    MyClass *pointerToMyClass;
    cout << sizeof(*pointerToMyClass) << endl;
    // segmentation fault:
    //  **** cout << pointerToMyClass->getVal() << endl; ****

    MyClass &referenceToMyClass = my;
    const MyClass &constReferenceToMyClass = my;
    
    
    operateOverMyClass(my);
    cout << my.getVal() << endl;
    operateOverMyClass(referenceToMyClass);
    cout << referenceToMyClass.getVal() << endl;
    // This call is not possible because the method CAN change state 
    //operateOverMyClass(constReferenceToMyClass);

    // All possible because there is no risk of chaging something inside the method.
    operateOverConstMyClass(my);
    operateOverConstMyClass(referenceToMyClass);
    operateOverConstMyClass(constReferenceToMyClass);


    return 0;
}