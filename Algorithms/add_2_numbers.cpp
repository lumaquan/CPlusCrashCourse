#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    std::cout << "Please enter two numbers: ";
    std::cin >> x >> y;
    int sum = x + y;
    std::cout << "Their sum is " << sum << std::endl;
    return EXIT_SUCCESS;
}