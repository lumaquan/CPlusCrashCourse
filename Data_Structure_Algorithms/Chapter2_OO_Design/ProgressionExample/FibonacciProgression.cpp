#include "FibonacciProgression.h"

FibonacciProgression::FibonacciProgression(long f, long s) : Progression(f), second{s}, previous{s - f} {}

long FibonacciProgression::firstValue()
{
    current = first;
    previous = second - first;
    return current;
}

long FibonacciProgression::nextValue()
{
    long temp = previous;
    previous = current;
    current = previous + temp;
    return current;
}
