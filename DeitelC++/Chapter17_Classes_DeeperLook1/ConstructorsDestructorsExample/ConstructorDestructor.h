#include <string>
using namespace std;

#ifndef CREATE_H
#define CREATE_H

class CreateDestroy
{
public:
    CreateDestroy();
    CreateDestroy(int, string);
    ~CreateDestroy();
    void printMessage();

private:
    int objectID;
    string message;
};

#endif