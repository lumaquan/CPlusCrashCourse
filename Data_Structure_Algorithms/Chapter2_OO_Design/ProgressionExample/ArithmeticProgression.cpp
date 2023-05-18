#include "ArithmeticProgression.h"

ArithmeticProgression::ArithmeticProgression(long f, long inc ) : 
Progression(f), inc{inc} {}

long ArithmeticProgression::nextValue()
{
    current += inc;
    return current;
}
