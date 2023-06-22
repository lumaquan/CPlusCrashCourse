#pragma once

#include <string>
#include <stdexcept>

class QueueEmpty : public std::runtime_error
{
public:
    QueueEmpty(const std::string &err) : std::runtime_error(err) {}
};