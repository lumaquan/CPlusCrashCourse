#include <iostream>
#include <vector>
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

int main()
{

    vector<string> names = {"robert" , "jonas" ,"hector", "nadia"};
    MyClass m1{1};
    MyClass m2{1};
    MyClass m3{1};

    vector<MyClass> classes{m1,m2,m3};
    vector<int> integers{100, 56, 45, 45, 78, 656, 32};

    cout << "names.size() = " << names.size() << endl;
    cout << "classes.size() = " << classes.size() << endl;
    cout << "integers.size() = " << integers.size() << endl;

    names[0] = "margaret";
    names[12] = "espinoza";
    names[49] = "archibaldo";

    for (size_t i = 0; i < names.size(); i++)
    {
        cout << names[i] << " ";
    }
    cout << endl;

    for (size_t i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << " ";
    }
    cout << endl;

    for (size_t i = 0; i < classes.size(); i++)
    {
        cout << classes[i] << " ";
    }
    cout << endl;

}
