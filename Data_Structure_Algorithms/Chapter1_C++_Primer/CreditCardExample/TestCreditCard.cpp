#include <vector>
#include "CreditCard.h"

using namespace std;

void testCard()
{
    vector<CreditCard *> wallet(10);
    wallet[0] = new CreditCard("1191 0375 9387 5309", "John Bowman", 2500);
    wallet[1] = new CreditCard("3391 0375 9387 5309", "Oscar Bowman", 3500);
    wallet[2] = new CreditCard("5591 0375 9387 5309", "Betrain Bowman", 5000);

    for (int j = 1; j <= 16; j++)
    {
        wallet[0]->charge(double(j));
        wallet[1]->charge(2 * j);
        wallet[2]->charge(double(3 * j));
    }
    cout << "Card payments:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << *wallet[i];
        while (wallet[i]->getBalance() > 100.0)
        {
            wallet[i]->makePayment(100.0);
            cout << "New balance = " << wallet[i]->getBalance() << "\n";
        }
        cout << "\n";
        delete wallet[i]; // deallocate storage
    }
}

int main()
{
    testCard();
}