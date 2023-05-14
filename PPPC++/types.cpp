#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    // there are certain operations on type which are not so common
    char c = 'a';
    c+= 10;
    cout << c << endl;

    double d = 3.14;
    d++;
    cout << d << endl;

    string name = "luis";
    string spell = "grey";
    bool t = true;
    cout << bool(name > spell) << endl;
    cout << t << endl;




    string &name_r = name; // reference to object allocated for name

    name_r = "local";     // updated value of object allocated for name
    cout << "name_r = " << name_r << endl;
    cout << "name = " <<name << endl;
    name_r = spell; 
    
    cout << "name_r = " << name_r << endl;
    cout << "name = " <<name << endl;
    // neither name nor name_r can reference to a different location in memory    

    int a = 256*1213 + 97;
    int aa = 2000%256;
    char b = a;  // in this cast b = (unsigned int)a % 256
    cout << a << endl;
    cout << aa << endl;
    cout << b << endl; // if   < a 


    // If unsigned value is used then the values for char are 0x80 ... 0xFF 0 ... 127
    // Only characters in range [20,...126] are printable
    for (int i = -128; i < 127; i++)
    {
        char c= i;   // in iMac c is signed, it runs from -128 to 127 
        cout << "c = " << c;
        printf(", c = %c\n", c);
        int x = c;   // here the value would be -128 to 127 
        cout << "x = " << x;
        printf(", x = %d\n", x);
    }
    cout << endl;


    // C++11 facilities to report narrowing as a warning
    double pi = 3.141592;
    //int pi_t{pi};
    //int y = 257;
    //char cy{y};

    return 0;
}
