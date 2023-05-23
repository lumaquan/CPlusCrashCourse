#ifndef GAME_ENTRY_H
#define GAME_ENTRY_H

#include <iostream>

class GameEntry
{
public:
    GameEntry(const std::string &nm = "", int s = 0);
    std::string getName() const;
    int getScore() const;
    std::ostream &operator<<(std::ostream &out);
    friend std::ostream &operator<<(std::ostream &out, const GameEntry &e);

private:
    std::string name;
    int score;
};
#endif