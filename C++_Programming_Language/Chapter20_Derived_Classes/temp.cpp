
#include <iostream>


using namespace std;


void printArray(int a[2][3])
{
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int b[2][3]= {{1,2,3},{4,5,6}};
    printArray(b);

}