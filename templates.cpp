#include <vector>
#include <iostream>
#include <string>


using namespace std;


int main()
{

vector<int> scores(100);

scores.push_back(12);
scores.push_back(11);
scores.push_back(13);

cout << scores.size()  << endl;


string name = "Luis Mauricio";

cout << sizeof(name[4]) << endl;
cout << name[name.size() -1 ] << endl;
cout << name.find(" ") << endl;
cout << name.find("au", 7) << endl;
cout << name.find("au ") << endl;
cout << name.substr(4,7) << endl;
name.replace(name.find("M"), 8, "Nadia");
cout << name << endl;
cout << string::npos << endl;


if(name.find("Nadia") == string::npos)
{
    cout << "No encontrado" << endl;
}
}