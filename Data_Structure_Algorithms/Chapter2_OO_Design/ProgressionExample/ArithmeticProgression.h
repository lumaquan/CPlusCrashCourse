#ifndef ARITHMETIC_PROGRESSION_H
#define ARITHMETIC_PROGRESSION_H

#include "Progression.h"

class ArithmeticProgression : public Progression
{

public:
    ArithmeticProgression(long f= 0, long inc = 1);

protected:
    long nextValue();

private:
    long inc;
};

#endif
