#include <iostream>
#include "ConstructorDestructor.h"
using namespace std;

void create(void);

void receiveObject(CreateDestroy createDestroy)
{
    cout << "RECEIVE OBJECT FUNCTION BEGINS" << endl;
    createDestroy.printMessage();
    cout << "RECEIVE OBJECT FUNCTION ENDS" << endl;
}

CreateDestroy first(1, "(global before main)");

int main()
{
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;

    CreateDestroy second(2, "(local automatic in main)");
    static CreateDestroy third(3, "(local static in main)");
    create();
    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
    CreateDestroy fourth(4, "(local automatic in main)");
    receiveObject(fourth);

    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
}

static CreateDestroy eigth(8, "(global  static after main)");

void create(void)
{
    cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;

    CreateDestroy fifth(5, "(local automatic in create)");
    static CreateDestroy sixth(6, "(local static in create)");
    CreateDestroy seventh(7, "(local automatic in create)");

    cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}