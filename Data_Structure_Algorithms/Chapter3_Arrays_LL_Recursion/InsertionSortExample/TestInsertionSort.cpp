#include <string>
#include <iomanip>
#include "Util.h"

using namespace std;

template <typename T>
void insertion_sort(T *const a, int n)
{
    for (int i = 1; i < n; i++)
    {
        T c = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > c)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = c;
    }
}

void printBiArrayNxM(int **a, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << a[i][j] << " ";
        }
        cout << endl;
    }
}

void printBiArrayNxM(int *a, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << *(a + cols * i + j) << " ";
        }
        cout << endl;
    }
}

void printBiArrayLinear(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(a + i) << " ";
        cout << endl;
    }
}

void fillMatrixRandom(int **a, int rows, int cols, int range)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int v = rand() % range;
            a[i][j] = v; // exception here!!
        }
    }
}

void fillMatrixRandom(int *a, int rows, int cols, int range)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int v = rand() % range;
            *(a + cols * i + j) = v;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int ia[] = {1, 6, 2, 9, 10, 12};
    string sa[] = {"luis", "nadia", "tambor", "jacaranda", "zopilote"};
    char ca[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXTZ";
    insertion_sort(ia, 6);
    printArray(ia, 6);
    insertion_sort(sa, 5);
    printArray(sa, 5);
    int size = sizeof(ca) / sizeof(char);
    insertion_sort(ca, size);
    printArray(ca, size);

    int m = 4; // rows
    int n = 3; // columns
    int a[m][n];

    fillMatrixRandom(a[0], m, n, 1000);
    printBiArrayNxM(a[0], m, n); // a[i] is int*
    cout << endl;
    printBiArrayLinear(a[0], m * n); // a[i] is int*
    cout << endl;

    // Print rows as ordinary linear arrays
    printArray(a[0], n);
    printArray(a[1], n);
    printArray(a[2], n);
    printArray(a[3], n);

    int **M = new int *[m]; // array of int *
    // *M is a pointer is type int *
    // therefore M can address an array of int * ( rows )
    for (int i = 0; i < m; i++)
    {
        M[i] = new int[n]; // *(M+i) = new int[m]
        // so contiguous memory is address for consecutive rows
    }
    fillMatrixRandom(M, m, n, 100);
    printBiArrayNxM(M, m, n);

    for (int i = 0; i < m; i++)
        delete[] M[i]; // delete the i-th row
    delete[] M;
}