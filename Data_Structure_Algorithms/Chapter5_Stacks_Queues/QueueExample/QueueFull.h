#pragma once

#include <string>
#include <stdexcept>

class QueueFull : public std::runtime_error
{
public:
    QueueFull(const std::string &err) : std::runtime_error(err) {}
};