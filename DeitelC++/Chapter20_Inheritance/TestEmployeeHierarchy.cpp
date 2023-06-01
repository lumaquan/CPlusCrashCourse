
#include "ComissionEmployee.h"
#include "BasePlusCommissionEmployee2.h"
#include <iostream>

using namespace std;

int main()
{
   CommissionEmployee ce{"Luis", "Melendez", "093464645", 150000, 0.4};
   ce.print();
   cout << endl;
   cout << ce.earnings() << endl;
   cout << sizeof(ce) << endl;

   BasePlusCommissionEmployee2 bpc1("Luis", "Melendez", "093464645", 150000, 0.4, 20000);
   bpc1.print();
   cout << endl;
   cout << bpc1.earnings() << endl;
   cout << sizeof(bpc1) << endl;

   CommissionEmployee *pce = &ce;
   BasePlusCommissionEmployee2 *pbpce2 = (BasePlusCommissionEmployee2 *)pce;
   pbpce2->print();
   cout << endl;
   cout << pbpce2->getBaseSalary() << endl;

   // BasePlusCommissionEmployee2* pbpce3 = &ce;  is not valid to store address of base class
   // object into pointer of derived class ( requires)

   BasePlusCommissionEmployee2 *pbpce3 = (BasePlusCommissionEmployee2 *)&ce;
   // it is clear that when initilizing a pointer is not only an address involved but
   // the type and its layout in memory is also considered.
}