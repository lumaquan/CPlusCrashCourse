#ifndef STACK_EMPTY_H
#define STACK_EMPTY_H
#include <string>
#include <stdexcept>


class StackEmpty : public std::runtime_error
{
public:
    StackEmpty(const std::string &err) : std::runtime_error(err) {}
};

#endif