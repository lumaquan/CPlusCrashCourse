#include <cstdio>
#include <iostream>

using namespace std;

class Progression
{

public:
    Progression(int f = 0) : first{f}, current{f}
    {
    }

    ~Progression()
    {
    }

    void printProgression(int n)
    {
        cout << firstValue();
        for (int i = 2; i <= n; i++)
            cout << " " << nextValue();
        cout << endl;
    }

protected:
    int first;
    int current;

    virtual int firstValue()
    {
        current = first;
        return current;
    }

    virtual int nextValue()
    {
        return ++current;
    }
};

class ArithmeticProgression : public Progression
{

public:
    ArithmeticProgression(int f = 0, int inc = 1) : Progression(f), inc{inc} {}

    virtual int nextValue()
    {
        current += inc;
        return current;
    }

private:
    int inc;
};

class GeometricProgression : public Progression
{

public:
    GeometricProgression(int f = 1, int base = 2) : Progression(f), base{base} {}

    virtual int nextValue()
    {
        current *= base;
        return current;
    }

private:
    int base;
};

class FibonacciProgression : public Progression
{

public:
    FibonacciProgression(int f = 1, int s = 1) : Progression(f), second{s}, previous{s - f} {}

    virtual int firstValue()
    {
        current = first;
        previous = second - first;
        return current;
    }

    virtual int nextValue()
    {
        int preprevious = previous;
        previous = current;
        current = previous + preprevious;
        return current;
    }

private:
    int second;
    int previous;
};

void processAProgression(Progression p, int i)
{
    p.printProgression(i);
}

void processAProgression(Progression *p, int i)
{
    p->printProgression(i);
}

int main()
{
    Progression progression;
    progression.printProgression(10);
    Progression *arithmeticProgression = new ArithmeticProgression(7, 5);
    arithmeticProgression->printProgression(10);
    Progression *arithmeticProgression2 = new ArithmeticProgression{};
    arithmeticProgression2->printProgression(10);
    Progression *geometricProgression = new GeometricProgression{};
    geometricProgression->printProgression(10);
    Progression *geometricProgression2 = new GeometricProgression{5, 10};
    geometricProgression2->printProgression(10);
    Progression *fibonacciProgression = new FibonacciProgression{1, 1};
    fibonacciProgression->printProgression(10);
    cout << endl;
    // using a variable of type Progression or a reference to it does not call
    // overriden method printProgression

    processAProgression(progression, 10);
    processAProgression(*arithmeticProgression, 10);
    processAProgression(*arithmeticProgression2, 10);
    processAProgression(*geometricProgression, 10);
    processAProgression(*geometricProgression2, 10);
    processAProgression(*fibonacciProgression, 10);
    cout << endl;

    // using a variable of type Progression* does call overriden method printProgression
    processAProgression(&progression, 10);
    processAProgression(arithmeticProgression, 10);
    processAProgression(arithmeticProgression2, 10);
    processAProgression(geometricProgression, 10);
    processAProgression(geometricProgression2, 10);
    processAProgression(fibonacciProgression, 40);
    cout << endl;

    delete arithmeticProgression;
    delete arithmeticProgression2;
    delete geometricProgression;
    delete geometricProgression2;
    delete fibonacciProgression;

    return 0;
}