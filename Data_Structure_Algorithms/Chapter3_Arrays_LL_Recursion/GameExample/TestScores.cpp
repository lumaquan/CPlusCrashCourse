#include <iostream>
#include "Scores.h"
#include <iomanip>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    Scores scores;
    for (size_t i = 0; i < 100; i++)
    {
        int score = rand() % 100;
        string name = "A";
        name.append(to_string(i));
        scores.add(GameEntry(name, score));
    }
    cout << scores << endl;
    cout << scores.remove(2) << endl;
    cout << scores << endl;
    cout << scores.remove(7) << endl;
    cout << scores << endl;
}