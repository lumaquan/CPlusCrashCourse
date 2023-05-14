#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class GameEntry
{
public:

    GameEntry(const string &n = "NO NAME", int s = 0);
    string getName() const;
    int getScore() const;
    void print() const;

private:
    string name;
    int score;
};

GameEntry::GameEntry(const string &n, int s) : name{n}, score{s} {}
string GameEntry::getName() const { return name; }
int GameEntry::getScore() const { return score; }
void GameEntry::print() const
{
    cout << "name = " << name << ", score = " << score << endl;
}

class IndexOutOfBounds
{

public:
    IndexOutOfBounds(const string &err) : errorMsg{err} {}
    string getError() { return errorMsg; }

private:
    string errorMsg;
};

class Scores
{
public:
    Scores(int maxEnt = 10);
    ~Scores();
    void add(const GameEntry &e);
    GameEntry remove(int i);
    void print() const;

private:
    int maxEntries;
    int numEntries;
    GameEntry *entries;
    bool isFull()
    {
        return numEntries = maxEntries;
    }
};

Scores::Scores(int maxEnt)
{
    maxEntries = maxEnt;
    entries = new GameEntry[maxEnt];
    numEntries = 0;
}

Scores::~Scores()
{
    delete[] entries;
}

void Scores::add(const GameEntry &e)
{
    int score = e.getScore();
    if (isFull())
    {
        if (score <= entries[numEntries - 1].getScore())
        {
            return;
        }
    }
    else
    {
        numEntries++;
    }
    int j = numEntries - 2;
    while (j >= 0 && score > entries[j].getScore())
    {
        entries[j + 1] = entries[j];
        j--;
    }
    entries[j + 1] = e;
}

GameEntry Scores::remove(int i)
{
    if (i < 0 || i > numEntries - 1)
    {
        throw IndexOutOfBounds("Invalid Index");
    }
    GameEntry e = entries[i];
    for (int j = i + 1;   j< numEntries; j++)
    {
        entries[j - 1] = entries[j];
    }
    numEntries--;
    return e;
}

void Scores::print() const
{
    cout << "[";
    if (numEntries == 0)
    {
        cout << "]" << endl;
        return;
    }
    for (int i = 0; i < numEntries - 1; i++)
    {
        cout << entries[i].getScore() << ", ";
    }
    cout << entries[numEntries - 1].getScore() << "]" << endl;
}



int main()
{
    Scores scores{3};
    scores.print();
    GameEntry ge1{"Nadia", 10223};
    GameEntry ge2{"Luis", 12554};
    GameEntry ge3{"Pedro", 7248};
    GameEntry ge4{"Oscar", 5000};
    GameEntry ge5{"Miguel", 11111};

    scores.add(ge1);
    scores.print();
    scores.add(ge2);
    scores.print();
    scores.add(ge3);
    scores.print();
    scores.add(ge4);
    scores.print();
    scores.add(ge5);
    scores.print();

    try
    {
        scores.remove(3);
    }
    catch (IndexOutOfBounds e)
    {
        cout << e.getError() << endl;
    }

    cout << scores.remove(0).getScore() << endl;
    scores.print();
    Scores scores2;
    scores2.print();


}