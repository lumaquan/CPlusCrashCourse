#include <iostream>
#include "ContainerImpl.h"
#include "ContainerVector.h"

using namespace std;

void doSomething(Container **arr)
{
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < arr[j]->size(); i++)
        {
            cout << (*arr[j])[i] << endl;
        }
    }
}

int main()
{

    cout << "Container *arr[2]:" << endl;
    Container *arr[2];
    arr[0] = new ContainerImpl;
    arr[1] = new ContainerVector{1,2,3,4,5};
    doSomething(arr);

    delete arr[0];
    delete arr[1];
}