#include <iostream>
#include <string>

using namespace std;

class Computadora
{
public:
    // Once you provided a default constructor is possible to construct other
    // with a different list of parameters

    Computadora(int y, string m, string b = "BRAND", int p = 753) : year{y}, model{m}, brand{b}, price{p}
    {
        // Covers the constructor: Computadora(int y, string m)
        // Covers the constructor: Computadora(int y, string m, string b)
        // Covers the constructor: Computadora(int y, string m, string b, int p)
    }

    // This becomes the default because defaults are given for all the parameters
    Computadora(string m = "MODEL", string b = "BRAND") : year{1789}, model{m}, brand{b}, price{2000}
    {
        // Covers the constructor: Computadora()
        // Covers the constructor: Computadora(string m)
        // Covers the constructor: Computadora(string m, string b)
    }

    void print()
    {
        cout << "year = " << year << endl;
        cout << "model = " << model << endl;
        cout << "brand = " << brand << endl;
        cout << "price = " << price << endl;
        cout << endl;
    }

private:
    int year;
    string model;
    string brand;
    int price;
};

class Vect
{
public:
    Vect(const Vect &copy)
    {
        size = copy.size;
        data = new int[size];
        cout << "create array of " << size << " elements " << endl;
        for (size_t i = 0; i < size; i++)
        {
            data[i] = copy.data[i];
        }
        cout << "copy  " << size << " elements in constructor" << endl;
    }

    Vect(int n = 10) : size{n}
    {
        data = new int[n];
        cout << "create array of " << n << " elements " << endl;
    }
    ~Vect()
    {
        delete[] data;
    }
    void print()
    {
        for (size_t i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void set(int i, int v)
    {
        data[i] = v;
    }

    Vect &operator=(const Vect &a)
    {
        if (this != &a)
        {
            delete[] data;
            cout << "delete array of " << size << " elememts " << endl;
            size = a.size;
            data = new int[size];
            cout << "create array of " << size << " elements " << endl;
            for (size_t i = 0; i < size; i++)
            {
                data[i] = a.data[i];
            }
            cout << "copy  " << size << " elements in assignment" << endl;
        }
        return *this;
    }

private:
    int size;
    int *data;
};

void doSomething()
{
    Vect v1;
    Vect v2{20};
    v2 = v1;
    Vect v3{v1};
}

int main()
{
    Computadora c1;
    c1.print();
    Computadora c2{1900, "MODEL-1900"};
    c2.print();
    Computadora c3{c1}; // shallow copy
    c3.print();
    Computadora c4 = c2; // shallow copy
    c4.print();
    Computadora c5 = {"MODEL-1800"};
    c5.print();
    doSomething();


    return 0;
}