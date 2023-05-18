#include "GeometricProgression.h"

GeometricProgression::GeometricProgression(long f, long base) : Progression{f}, base{base} {}

long GeometricProgression::nextValue()
{
    current *=base;
    return current;
}