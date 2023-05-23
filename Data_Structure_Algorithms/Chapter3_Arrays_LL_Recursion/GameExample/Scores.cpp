#include "Scores.h"
#include <stdexcept>

Scores::Scores(int maxEntries)
{
    this->maxEntries = maxEntries;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Scores::~Scores()
{
    delete[] entries;
}

void Scores::print() const
{
    for (size_t i = 0; i < maxEntries; i++)
    {
        std::cout << "(" << entries[i].getName() << ", " << entries[i].getScore() << ") ";
    }
    std::cout << std::endl;
}

void Scores::add(const GameEntry &e)
{
    if (numEntries == maxEntries)
    {
        if (e.getScore() <= entries[numEntries - 1].getScore())
        {
            std::cout << "Element not added." << std::endl;
            return;
        }
    }
    else
    {
        numEntries++;
    }

    int i = numEntries - 2; // previous to last one if full; last one if not full
    while (i >= 0 && e.getScore() > entries[i].getScore())
    {
        entries[i + 1] = entries[i];
        i--;
    }
    entries[i + 1] = e;
}

GameEntry Scores::remove(int i) noexcept(false)
{
    if (i < 0 || i >= numEntries)
    {
        throw std::out_of_range("index out of range");
    }
    GameEntry e = entries[i];
    for (int j = i + 1; j < numEntries; j++)
    {
        entries[j - 1] = entries[j];
    }
    entries[numEntries - 1] = GameEntry();
    numEntries--;
    return e;
}

std::ostream &operator<<(std::ostream &out, const Scores &s)
{
    out << "[";
    if (s.numEntries == 0)
    {
        out << "]";
        return out;
    }
    int i = 0;
    for (; i < s.maxEntries - 1; i++)
    {
        out << "(" << s.entries[i].getName() << ", " << s.entries[i].getScore() << "),  ";
    }
    out << "(" << s.entries[i].getName() << ", " << s.entries[i].getScore() << ")";
    out << "]";
    return out;
}
