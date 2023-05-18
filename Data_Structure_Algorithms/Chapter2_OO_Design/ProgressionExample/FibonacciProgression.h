#ifndef FIBONACCI_PROGRESSION_H
#define FIBONACCI_PROGRESSION_H

#include "Progression.h"


class FibonacciProgression : public Progression
{

public:
    FibonacciProgression(long f = 1, long s = 1);

protected:    
    long firstValue();
    long nextValue();

private:
    long second;
    long previous;
};
#endif