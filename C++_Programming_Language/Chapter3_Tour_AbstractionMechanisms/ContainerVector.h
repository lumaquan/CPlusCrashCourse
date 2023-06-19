#include "VectorComplexExample/Vector.h"

class ContainerVector : public Container
{
private:
    Vector v;

public:
    ContainerVector(initializer_list<double> ils = {}) : v{Vector{ils}}
    {
        cout << "ContainerVector CONSTRUCTOR" << endl;
    }

    ContainerVector(int s = 10) : v(s)
    {
        cout << "ContainerVector CONSTRUCTOR" << endl;
    }
    ~ContainerVector()
    {
        cout << "ContainerVector DESTRUCTOR" << endl;
    }

    double &operator[](int i)
    {
        return v[i];
    }

    int size() const
    {
        return v.size();
    }
};
