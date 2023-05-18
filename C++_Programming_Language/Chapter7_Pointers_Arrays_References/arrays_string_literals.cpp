#include <cstdio>
#include <iostream>

using namespace std;

class Cosa
{
public:
    Cosa(int x = 0) : id{x}
    {
        cout << "Cosa constructor, id = " << id << endl;
    }

    int getId() const
    {
        return id;
    }

    void setId(int nId)
    {
        id = nId;
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
template <typename T>
void printArray(const T *t, int size);

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

    const char *pp = "Ganimedes"; // in g++-12 only one string literal is static allocated
    const char *qq = "Ganimedes";
    cout << ((pp == qq) ? "same" : "different") << endl;

    // Little test of const T* objects
    Cosa c1{10};
    Cosa c2{20};
    const Cosa c3{30};
    const Cosa *pC = &c1;
    cout << pC->getId() << endl;
    pC = &c2;
    cout << pC->getId() << endl;
    pC = &c3;
    cout << pC->getId() << endl;

    Cosa *const ppC = &c1;
    // ppC = &c2; Cannot be assigned to any thing different

    // Default copy constructor ARE memberwise constructors
    Cosa cosi1{10};
    Cosa cosi2 = cosi1; // No constructor is called
    Cosa cosi3{cosi1};  // No constructor is called
    cosi2.setId(22);
    cosi3.setId(33);
    Cosa CosaArr[] = {cosi1, cosi2, cosi3};
    printCosaArray(CosaArr, 3);

    // Testing template function
    cout << "TESTING FUNCTION TEMPLATE TO PRINT ARRAYS:" << endl;
    printArray(darr, 5);
    printArray(iarr, 4);
    printArray(carr, 12);
    printArray(CosaArr, 3);
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

template <typename T>
void printArray(const T *t, int size)
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
        cout << t[i] << ", ";
    }
    cout << t[i] << "]" << endl;
}