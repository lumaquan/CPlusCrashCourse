#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string name = "en el nombre del padre, del hijo y del espiritu santo";
    char *nombre = "nombre";
    char padre[] = {'p', 'a', 'd', '\0'};
    cout << name.find(nombre) << endl;
    int padreIndex = name.find(padre);
    cout << name.substr(padreIndex, 5) << endl;
    cout << name.erase(padreIndex, 5) << endl;
    cout << name << endl;
    cout << name.insert(padreIndex, "yoyomatzin") << endl;
    cout << name << endl;
    cout << name.find("extra") << endl;
    unsigned long vales = string::npos;
    cout << vales << endl;
}