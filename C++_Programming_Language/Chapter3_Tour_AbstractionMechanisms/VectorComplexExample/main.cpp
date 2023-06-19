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

void testMethodCalls()
{
    cout << endl;
    cout << "Vector v(3):" << endl;
    Vector v(3);
    v[0] = 1.0;
    v[1] = 2.0;
    v[2] = 3.0;
    cout << "v = " << v << endl;

    cout << endl;
    cout << "Vector v2:" << endl;
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
}

void testComplex()
{
    complex c1{1, 2};
    cout << c1 << endl;
    complex c2{4, 5};
    c1 += c2;
    cout << c1 << endl;
}

void testConstruction()
{
    cout << endl;
    cout << "Vector v(3):" << endl;
    Vector v(3);
    v[0] = 1.0;
    v[1] = 2.0;
    v[2] = 3.0;
    cout << "v = " << v << endl;

    cout << endl;
    cout << "Vector v2:" << endl;
    Vector v2;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "v2 = v:" << endl;
    v2 = v;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "Vector v3{v2}: " << endl;
    Vector v3{v2};
    cout << "v3 = " << v3 << endl;
    cout << "v2 = " << v2 << endl;

    cout << endl;
    cout << "Vector v4 ={10}: " << endl;
    Vector v4 = {10};
    cout << "v4 = " << v4 << endl;

    cout << endl;
    cout << "Vector v5{1,2,3,4,5,6,7}: " << endl;
    Vector v5{1, 2, 3, 4, 5, 6, 7};
    cout << "v5 = " << v5 << endl;

    cout << endl;
    cout << "Vector v6{}: " << endl;
    Vector v6{};
    cout << "v6 = " << v6 << endl;

    cout << endl;
    cout << "Vector v7 = {}: " << endl;
    Vector v7 = {};
    cout << "v7 = " << v7 << endl;

    cout << endl;
    cout << "Vector v8 = v: " << endl;
    Vector v8 = v;
    cout << "v8 = " << v8 << endl;

    cout << endl;
    cout << "Vector v9 = Vector{v2}: " << endl;
    Vector v9 = Vector{v2};
    cout << "v9 = " << v9 << endl;

    cout << endl;
    cout << "Vector v10 = 10: " << endl;
    Vector v10 = 10;
    cout << "v10 = " << v10 << endl;

    cout << endl;
    cout << "Vector v11{11}: " << endl;
    Vector v11{11};
    cout << "v11 = " << v11 << endl;

    cout << endl;
    cout << "Vector v12 = {12}: " << endl;
    Vector v12 = {12};
    cout << "v12 = " << v12 << endl;

    cout << endl;
    cout << "Vector *pv = new Vector{v}: " << endl;
    Vector *pv = new Vector{v};
    cout << "*pv = " << *pv << endl;
    cout << "v = " << v << endl;
    delete pv;

    cout << endl;
    cout << "Vector *pv2 = new Vector{}: " << endl;
    Vector *pv2 = new Vector{};
    cout << "*pv2 = " << *pv2 << endl;
    delete pv2;

    cout << endl;
    cout << "Vector *pv3 = new Vector(): " << endl;
    Vector *pv3 = new Vector();
    cout << "*pv3 = " << *pv3 << endl;
    delete pv3;

    cout << endl;
    cout << "Vector *pv4 = new Vector: " << endl;
    Vector *pv4 = new Vector;
    cout << "*pv4 = " << *pv4 << endl;
    delete pv4;
}

int main()
{
    cout << "MAIN BEGINS" << endl;
    testConstruction();
    cout << "MAIN ENDS" << endl;
}