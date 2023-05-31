#include <iostream>

using namespace std;

class Nueva
{
public:
    void print()
    {
        cout << "(" << x << ", " << y << ", " << name << ") " << endl;
    }

private:
    string name;
    int x;
    int y;
};

struct Name
{
    // both are public, can be memberwise initialized
    string first;
    string last;
    void print()
    {
        cout << "(" << first << ", " << last << ")" << endl;
    }
};

void myLocal()
{
    Nueva nueva; // x and y are not initialized
    nueva.print();

    Nueva nuevita{}; // all are initilized as type{}
    nuevita.print();
}

int main()
{
    // There is not constructor receiving 2 parameters
    // Nueva nueva1{0, 0};
    // n1.print();

    // x and y are not initilized; name is initialized as string{}
    Nueva nueva2; // statically allocated
    nueva2.print();

    // x and y are initilized, against what was said in book
    Nueva *nueva3 = new Nueva; // dynamically allocated
    nueva3->print();
    Nueva *nueva4 = new Nueva{}; // dynamically allocated
    nueva4->print();

    // memberwise initialization requires ALL public fields
    Name name1{"Luis", "Melendez"};  
    name1.print();

    myLocal();

    delete nueva3;
}