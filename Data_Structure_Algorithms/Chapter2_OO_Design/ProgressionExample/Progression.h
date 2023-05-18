#ifndef PROGRESSION_H
#define PROGRESSION_H

class Progression
{

public:
    Progression(long f = 0);
    virtual ~Progression();
    void printProgression(int n);

protected:
    long first;
    long current;
    virtual long firstValue();
    virtual long nextValue();
};

#endif