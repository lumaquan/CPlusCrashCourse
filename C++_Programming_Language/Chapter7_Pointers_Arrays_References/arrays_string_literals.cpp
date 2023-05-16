#include <cstdio>
#include <iostream>

using namespace std;

class Cosa
{
public:
    Cosa(int x = 0) : id{x}
    {
    }

    int getId() const
    {
        return id;
    }

    friend ostream &operator<<(ostream &o, const Cosa &a)
    {
        o << a.id;
        return o;
    }

private:
    int id;
};

void createArray(int n);
int giveInt();
double averageIt(double *a, int n);
void printIntArray(const int *a, int size);
void printCharArray(const char *a, int size);
void printDoubleArray(const double *a, int size);
void printCosaArray(const Cosa *a, int size);

int main()
{
    // createArray(giveInt());

    int *p = new int[40]; // array in free store; all zeros
    printIntArray(p, 40);
    delete[] p;

    double darr[] = {3.5, 4.8, 9.5, 6.7, 8.0};
    printDoubleArray(darr, 5);
    cout << "average: " << averageIt(darr, 5) << endl;

    int iarr[4]{1, 2, 3, 4};
    printIntArray(iarr, 4);

    char *carr = "Hello world";
    // carr[0] = 'T';       this is not allowed
    printCharArray(carr, 12);
    char carr2[] = "Hola Mundo";
    carr2[0] = 'C'; // valid way to have a modifible string in an array
    printCharArray(carr2, 11);

    Cosa cositas[5]; // Default constructor is called
    printCosaArray(cositas, 5);
    Cosa cosotas[] = {Cosa{1}, Cosa{2}, Cosa{3}}; // Constructor with parameters
    printCosaArray(cosotas, 3);
    Cosa cosillas[]{Cosa{5}, Cosa{92}, Cosa{138}};
    printCosaArray(cosillas, 3);

    cout << sizeof("Lion") << endl;

    const char *pp = "Ganimedes";  // in g++-12 only one string literal is static allocated
    const char *qq = "Ganimedes";
    cout << ((pp == qq) ? "same" : "different") << endl;

    cout<<"beep at end of message\a\n";
}

// function definitions

void createArray(int n)
{
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = i * i;
        cout << arr[i] << endl;
    }
}

int giveInt()
{
    return rand();
}

double averageIt(double *a, int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}

void printIntArray(const int *a, int size)
{
    cout << "[";
    if (size == 0)
    {
        cout << "]" << endl;
        return;
    }
    int i = 0;
    for (; i < size - 1; i++)
    {
        cout << a[i] << ", ";
    }
    cout << a[i] << "]" << endl;
}

void printCharArray(const char *a, int size)
{
    cout << "[";
    if (size == 0)
    {
        cout << "]" << endl;
        return;
    }
    int i = 0;
    for (; i < size - 1; i++)
    {
        cout << a[i] << ", ";
    }
    cout << a[i] << "]" << endl;
}

void printDoubleArray(const double *a, int size)
{
    cout << "[";
    if (size == 0)
    {
        cout << "]" << endl;
        return;
    }
    int i = 0;
    for (; i < size - 1; i++)
    {
        cout << a[i] << ", ";
    }
    cout << a[i] << "]" << endl;
}

void printCosaArray(const Cosa *a, int size)
{
    cout << "[";
    if (size == 0)
    {
        cout << "]" << endl;
        return;
    }
    int i = 0;
    for (; i < size - 1; i++)
    {
        cout << a[i] << ", ";
    }
    cout << a[i] << "]" << endl;
}