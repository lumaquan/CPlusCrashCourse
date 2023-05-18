#include <cstdio>
#include <iostream>
#include "Progression.h"
#include "ArithmeticProgression.h"
#include "GeometricProgression.h"
#include "FibonacciProgression.h"

using namespace std;

int main()
{
    Progression progression1;
    progression1.printProgression(10);
    Progression progression2{7};
    progression2.printProgression(10);
    cout << endl;

    ArithmeticProgression arithmeticProgression1;
    arithmeticProgression1.printProgression(10);
    ArithmeticProgression arithmeticProgression2{118};
    arithmeticProgression2.printProgression(10);
    ArithmeticProgression arithmeticProgression3{-89, 3};
    arithmeticProgression3.printProgression(10);
    cout << endl;

    GeometricProgression geometric_progression1{};
    geometric_progression1.printProgression(10);
    GeometricProgression geometric_progression2{5};
    geometric_progression2.printProgression(10);
    GeometricProgression geometric_progression3{5, 3};
    geometric_progression3.printProgression(10);
    cout << endl;

    FibonacciProgression fibonacci_progression1;
    fibonacci_progression1.printProgression(10);
    FibonacciProgression fibonacci_progression2{3};
    fibonacci_progression2.printProgression(10);
    FibonacciProgression fibonacci_progression3{2, 5};
    fibonacci_progression3.printProgression(10);
    cout << endl;

    Progression *p[11];
    p[0] = &progression1;
    p[1] = &progression2;
    p[2] = &arithmeticProgression1;
    p[3] = &arithmeticProgression2;
    p[4] = &arithmeticProgression3;
    p[5] = &geometric_progression1;
    p[6] = &geometric_progression2;
    p[7] = &geometric_progression3;
    p[8] = &fibonacci_progression1;
    p[9] = &fibonacci_progression2;
    p[10] = &fibonacci_progression3;

    for (int i = 0; i < 11; i++)
    {
        p[i]->printProgression(10);
    }

    return 0;
}