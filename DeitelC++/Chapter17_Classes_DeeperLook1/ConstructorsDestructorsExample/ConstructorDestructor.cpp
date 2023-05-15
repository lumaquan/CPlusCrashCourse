#include <iostream>
#include "ConstructorDestructor.h"
using namespace std;

CreateDestroy::CreateDestroy()
{
    objectID = -1;
    message = "DEFAULT MESSAGE";
    cout << "Object " << objectID << " constructor runs " << message << endl;
}

CreateDestroy::CreateDestroy(int ID, string msg)
{
    objectID = ID;
    message = msg;
    cout << "Object " << objectID << " constructor runs " << message << endl;
}

CreateDestroy::~CreateDestroy()
{
    cout << (objectID == 1 || objectID == 6 ? "\n" : "");
    cout << "Object " << objectID << " destructor runs " << message << endl;
}

void CreateDestroy::printMessage()
{
    cout << "Object " << objectID << " printMessage runs " << message << endl;
}

CreateDestroy zeroth(0, "(global before in CreateDestroy definition source file main)");