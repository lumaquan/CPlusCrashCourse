#include <memory>
#include <string>
#include <iostream>

using namespace std;

int main()
{

        vector<string> apples;
        apples.push_back("Granny Smith 1");
        apples.push_back("Granny Smith 2");
        apples.push_back("Granny Smith 3");
        apples.push_back("Granny Smith 4");

        for (auto &v : apples)
        {
                cout << v << " ";
        }
        cout << endl;

        return 0;
}