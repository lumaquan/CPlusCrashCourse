
#include "ComissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <iostream>

using namespace std;

int main()
{
   cout << "Create a CommissionEmployee: " << endl;
   CommissionEmployee ce{"Luis", "Melendez", "093464645", 150000, 0.4};
   ce.print();
   cout << endl;
   cout << endl;

   cout << "Create a BasePlusCommissionEmployee: " << endl;
   BasePlusCommissionEmployee bpc1("Luis", "Melendez", "093464645", 150000, 0.4, 20000);
   bpc1.print();
   cout << endl;
   cout << endl;

   cout << "Create a CommissionEmployee * and pointed to CommissionEmployee: " << endl;
   CommissionEmployee *pce = &ce;
   pce->print();
   cout << endl;
   cout << endl;

   cout << "Create a BasePlusCommissionEmployee * and cast a CommissionEmployee*: " << endl;
   BasePlusCommissionEmployee *pbpce2 = (BasePlusCommissionEmployee *)pce;
   pbpce2->print();
   cout << endl;
   cout << endl;
   // BasePlusCommissionEmployee* pbpce3 = &ce;  is not valid to store address of base class
   // object into pointer of derived class ( requires)

   cout << "Create a BasePlusCommissionEmployee* and cast a &CommissionEmployee: " << endl;
   BasePlusCommissionEmployee *pbpce3 = (BasePlusCommissionEmployee *)&ce;
   pbpce3->print();
   cout << endl;
   cout << endl;
   // it is clear that when initilizing a pointer is not only an address involved but
   // the type and its layout in memory is also considered.
}