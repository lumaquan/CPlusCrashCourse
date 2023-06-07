#ifndef STACK_FULL_H
#define STACK_FULL_H
#include <string>
#include <stdexcept>

class StackFull : public std::runtime_error
{
public:
    StackFull(const std::string &err) : std::runtime_error(err) {}
};

#endif