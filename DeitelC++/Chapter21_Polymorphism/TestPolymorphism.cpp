#include "ComissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <iostream>

using namespace std;
int main()
{
    cout << "Base.print():" << endl;
    CommissionEmployee ce1("Sue", "Jones", "222-22-2222", 10000, .06);
    ce1.print();
    cout << endl;
    cout << endl;

    cout << "Derived.print():" << endl;
    BasePlusCommissionEmployee bpce1("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
    bpce1.print();
    cout << endl;
    cout << endl;

    cout << "(Base* = &Base)->print():" << endl;
    CommissionEmployee *cePtr = &ce1;
    cePtr->print();
    cout << endl;
    cout << endl;

    cout << "(Derived* = &Derived)->print():" << endl;
    BasePlusCommissionEmployee *bpcePtr = &bpce1;
    bpcePtr->print();
    cout << endl;
    cout << endl;

    cout << "(Base* = &Derived)->print():" << endl;
    cePtr = &bpce1;                                                 // CROSSOVER
    cePtr->print();
    cout << endl;
    cout << endl;

    cout << "(Base& = Base)->print():" << endl;
    CommissionEmployee &ceRef = ce1;
    ceRef.print();
    cout << endl;
    cout << endl;

    cout << "(Derived& = Derived)->print():" << endl;
    BasePlusCommissionEmployee &bpceRef = bpce1;
    bpceRef.print();
    cout << endl;
    cout << endl;

    cout << "(Base& = Derived)->print():" << endl;
    CommissionEmployee &ceRef2 = bpce1; // CROSSOVER
    ceRef2.print();
    cout << endl;
    cout << endl;

    cout << "(Derived* = (Derived*)&Base)->print():" << endl;
    BasePlusCommissionEmployee *bpcePtr2 = (BasePlusCommissionEmployee *)&ce1; // FORCE CAST
    bpcePtr2->setBaseSalary(100.15);
    bpcePtr2->print();
    cout << endl;
    cout << endl;

    cout << "(Derived& = (Derived&)Base)->print():" << endl;
    BasePlusCommissionEmployee &bpceRef2 = (BasePlusCommissionEmployee &)ce1; // FORCE CAST
    bpceRef2.print();
    cout << endl;
    cout << endl;


}