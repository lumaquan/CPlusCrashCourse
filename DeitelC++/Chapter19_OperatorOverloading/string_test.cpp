#include <iostream>
#include <string>

using namespace std;

void compare(string &first, string &second)
{
    cout << first << " == " << second << "? = " << ((first == second) ? "true" : "false") << endl;
    cout << first << " !=  " << second << "? = " << ((first != second) ? "true" : "false") << endl;
    cout << first << " < " << second << "? = " << ((first < second) ? "true" : "false") << endl;
    cout << first << " > " << second << "? = " << ((first > second) ? "true" : "false") << endl;
    cout << first << " <= " << second << "? = " << ((first <= second) ? "true" : "false") << endl;
    cout << first << " >= " << second << "? = " << ((first >= second) ? "true" : "false") << endl;
}

int main()
{
    string luis = "Luis Melendez";
    string nadia{"Nadia Sandoval"};
    string fernando("Fernando Salas");
    cout << "luis =" << luis << ", nadia = " << nadia << ", fer = " << fernando << endl;
    compare(luis, nadia);
    cout << endl;
    compare(luis, fernando);
    cout << endl;
    compare(nadia, fernando);
    cout << endl;

    string empty;

    if (empty.empty())
    {
        cout << "empty string.. fixing that" << endl;
        empty = nadia;
        cout << empty << endl;
    }

    empty += " ";  // this overloads += so right hand side is char *
    empty += luis; // this overloads += so right hand side is string
    cout << empty << endl;
    cout << nadia.substr(0, 10) + "ia" << endl;
    cout << nadia.substr(nadia.size() - 2) << endl;
    cout << nadia.substr(0) << endl;

    string mia = "mia";
    cout << mia.substr(mia.size() - 1) << endl;
    string copy_of_fer{fernando.substr(0, 9)};
    cout << copy_of_fer << endl;

    nadia = nadia;
    cout << nadia << endl;
    nadia[0] = 'Y'; // this does not make range checking
    nadia[1] = 'e'; // this does not make range checking
    cout << nadia << endl;
    const string nombre = "stradivarius";

    nadia.at(0) = 'N'; 
    nadia.at(1) = 'a';
    cout << nadia << endl;

    try
    {
        nadia.at(50) = 'G';
        cout << nadia << endl;
    }
    catch (out_of_range &ex)
    {
        cout << "I caught you !! " << endl;
    }

    return 0;
}