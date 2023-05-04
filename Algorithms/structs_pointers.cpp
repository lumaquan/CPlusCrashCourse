#include <cstdio>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;


enum MealTpye {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

struct Passenger
{
    // fields are public by default 
    string name;
    MealTpye mealTpye;
    bool isFreqFlyer;
    string freqFlyerNo;
};


void showPassenger(Passenger* p){ 
    cout << "name: " << p->name << ", meal: " << p->mealTpye << ", isFreqFlyer: " << p->isFreqFlyer <<endl; 
}

void showAllPassengers(Passenger* p, int n)
{ 
    for (size_t i = 0; i < n; i++, p++)
    {
        cout << "name: " << p->name << ", meal: " << p->mealTpye << ", isFreqFlyer: " << p->isFreqFlyer <<endl; 
    }
}

int main()
{

    // Both initilizations are valid; no need for a constructor
    Passenger luis = {"Luis Melendez", REGULAR, false, ""};
    Passenger nadia{"Nadia Sandoval",LOW_FAT, true, "1234"};


    // It is possible to copy two structures without declaring a copy constructor 
    Passenger jorge = luis;
    
    jorge.isFreqFlyer = true;
    cout << jorge.isFreqFlyer << endl;
    cout << luis.isFreqFlyer << endl;

    // No check for equality by default in structures
    // bool iguales = (jorge == luis);
    // cout << iguales << endl;

    // If we did not define a constructor... well do not use one.
    Passenger* hector = new Passenger;

    showPassenger(&luis);
    showPassenger(&nadia);
    showPassenger(&jorge);
    showPassenger(hector);

    

    Passenger* passengers = new Passenger[4];
    *passengers = luis;
    *(passengers +1 ) =  nadia;
    *(passengers +2) = jorge;
    *(passengers + 3) = *hector;
    showAllPassengers(passengers, 4);



    delete hector;
    delete[] passengers;

    return 0;
}
