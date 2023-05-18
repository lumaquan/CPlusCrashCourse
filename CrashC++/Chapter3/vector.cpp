#include <cstdio>
#include <vector>
#include <iostream>
#include <string>

void printVector(const std::string &name, const std::vector<int> &thevector)
{
   std::cout << name << " = { ";
   for (int n : thevector)
      std::cout << n << ", ";
   std::cout << "}; \n";
}

int main()
{

   std::vector<int> v = {7, 5, 16, 8};
   printVector("v", v);
   v.push_back(25);
   v.push_back(13);
   printVector("v", v);

   std::vector<int> m1;
   printVector("m1", m1);
   std::vector<int> m2 = {};
   printVector("m2", m2);
   std::vector<int> m3{};
   printVector("m3", m3);
   std::vector<int> m4{1, 2, 3, 4, 5};
   printVector("m4", m4);
   std::vector<int> m5 = {1, 2, 3, 4, 5};
   printVector("m4", m5);

   return 0;
}
