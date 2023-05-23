#include "GameEntry.h"

GameEntry::GameEntry(const std::string &nm, int s) : name{nm}, score{s}
{
}

std::string GameEntry::getName() const
{
    return name;
}

int GameEntry::getScore() const
{
    return score;
}

std::ostream &GameEntry::operator<<(std::ostream &out)
{
    out << "(" << name << ", " << score << ")";
    return out;
}

std::ostream &operator<<(std::ostream &out, const GameEntry &e)
{
    out << "(" << e.name << ", " << e.score << ")";
    return out;
}