#ifndef GEOMETRIC_PROGRESSION_H
#define GEOMETRIC_PROGRESSION_H

#include "Progression.h"

class GeometricProgression : public Progression
{

public:
    GeometricProgression(long f = 1, long base = 2);

protected:
    long nextValue();

private:
    long base;
};

#endif