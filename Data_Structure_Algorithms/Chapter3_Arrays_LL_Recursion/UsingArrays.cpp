#include <cstdio>
#include <string>
#include <iostream>
#include <exception>

using namespace std;

class GameEntry
{
public:
    GameEntry(const string &n = "", int s = 0);
    string getName() const;
    int getScore() const;
    bool operator==(const GameEntry &x) const;

private:
    string name;
    int score;
};

GameEntry::GameEntry(const string &n, int s) : name(n), score(s) {}
string GameEntry::getName() const { return name; }
int GameEntry::getScore() const { return score; }
bool GameEntry::operator==(const GameEntry &x) const
{
    return x.getName() == name && x.getScore() == score;
}
ostream &operator<<(ostream &out, GameEntry &e)
{
    out << "( " << e.getName() << "," << e.getScore() << ")";
    return out;
}

class Scores
{
public:
    Scores(int maxEnt = 10);
    ~Scores();
    void add(const GameEntry &e);
    GameEntry remove(int i);
    void print();

private:
    int maxEntries;
    int numEntries;
    GameEntry *entries;
};

Scores::Scores(int maxEnt)
{
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Scores::~Scores()
{
    delete[] entries;
}

void Scores::add(const GameEntry &e)
{
    int newScore = e.getScore();
    if (numEntries == maxEntries)
    {
        if (newScore <= entries[maxEntries - 1].getScore())
            return;
    }
    else
    {
        numEntries++;
    }

    int i = numEntries - 2;
    while (i >= 0 && newScore > entries[i].getScore())
    {
        entries[i + 1] = entries[i];
        i--;
    }
    entries[i + 1] = e;
}

GameEntry Scores::remove(int i)
{
    GameEntry e = entries[i];

    for (int j = i + 1; j < numEntries; j++)
    {
        entries[j - 1] = entries[j];
    }
    numEntries--;
    return e;
}

void Scores::print()
{
    for (int i = 0; i < numEntries; i++)
    {
        cout << entries[i].getName() << ", " << entries[i].getScore() << endl;
    }
}

int main()
{

    GameEntry ge = GameEntry("luis", 17989);
    GameEntry ge1 = GameEntry("nadia", 10000);
    GameEntry ge2 = GameEntry("hector", 7000);
    GameEntry ge3 = GameEntry("pedro", 8000);
    GameEntry ge4 = GameEntry("maria", 100000);

    Scores scs = Scores(20);
    Scores *pscs = &scs;

    pscs->add(ge);
    pscs->add(ge1);
    pscs->add(ge2);
    pscs->add(ge3);
    pscs->add(ge4);
    scs.print();

    return 0;
}
