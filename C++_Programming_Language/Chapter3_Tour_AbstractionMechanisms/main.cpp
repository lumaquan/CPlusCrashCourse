#include "complex.h"
#include "Vector.h"

void processVector(Vector v)
{
    int s = v.size();
    for (int i = 0; i < s; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

Vector &addOne_Vector_retVectorRef(Vector v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        v[i] += 1;
    }
    return v;
}

Vector addOne_Vector_retVector(Vector v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        v[i] += 1;
    }
    return v;
}

Vector addOne_VectorRef_retVector(const Vector &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        v[i] += 1;
    }
    return v;
}

Vector &addOne_VectorRef_retVectorRef(Vector &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        v[i] += 1;
    }
    return v;
}

int main()
{
    cout << "MAIN BEGINS" << endl;
    complex c1{1, 2};
    cout << c1 << endl;
    complex c2{4, 5};
    c1 += c2;
    cout << c1 << endl;

    cout << endl;
    cout << "creating v:" << endl;
    Vector v{3};
    v[0] = 1.0;
    v[1] = 2.0;
    v[2] = 3.0;
    cout << "v = " << v << endl;

    cout << endl;
    cout << "creating v2:" << endl;
    Vector v2;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "v2 = v:" << endl;
    v2 = v;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "calling a method(Vector = v): " << endl;
    processVector(v);
    cout << "v = " << v << endl;

    cout << endl;
    cout << "calling a method(Vector = v2): " << endl;
    processVector(v2);
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "calling a addOne_Vector_retVector: " << endl;
    v = addOne_Vector_retVector(v2);
    cout << "v = " << v << endl;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "calling a addOne_Vector_retVectorRef: " << endl;
    v = addOne_Vector_retVectorRef(v2);
    cout << "v = " << v << endl;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "calling a addOne_VectorRef_retVector: " << endl;
    v = addOne_VectorRef_retVector(v2);
    cout << "v = " << v << endl;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "calling a addOne_VectorRef_retVectorRef: " << endl;
    v = addOne_VectorRef_retVectorRef(v2);
    cout << "v = " << v << endl;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "creating v3{v2}: " << endl;
    Vector v3{v2};
    cout << "v3 = " << v3 << endl;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "creating *pv = new Vector(v)}: " << endl;
    Vector *pv = new Vector{v};
    cout << "*pv = " << *pv << endl;
    cout << "v = " << v << endl;

    cout << endl;
    cout << "creating v4 ={10}: " << endl;
    Vector v4 = {10};
    cout << "v4 = " << v4 << endl;

    delete pv;
    cout << "MAIN ENDS" << endl;
}