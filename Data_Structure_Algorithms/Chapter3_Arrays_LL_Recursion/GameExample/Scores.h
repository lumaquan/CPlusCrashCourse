#ifndef SCORES_H
#define SCORES_H

#include "GameEntry.h"
#include <iostream>

class Scores
{
    friend std::ostream &operator<<(std::ostream &out, const Scores &s);

public:
    Scores(int maxEntries = 10);
    ~Scores();
    void add(const GameEntry &e);
    GameEntry remove(int i) noexcept(false);
    void print() const;

private:
    int maxEntries;
    int numEntries;
    GameEntry *entries;
};
#endif