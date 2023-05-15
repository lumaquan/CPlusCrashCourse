#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    size_t size_b = sizeof(bool);
    printf("bool: %zd\n", size_b);

    size_t size_c = sizeof(char);
    printf("char: %zd\n", size_c);

    size_t size_s = sizeof(short);
    printf("short: %zd\n", size_s);

    size_t size_i = sizeof(int);
    printf("int: %zd\n", size_i);

    size_t size_l = sizeof(long);
    printf("long: %zd\n", size_l);

    size_t size_ll = sizeof(long long);
    printf("long long: %zd\n", size_ll);

    // unsigned types

    size_t size_uc = sizeof(unsigned char);
    printf("unsigned char: %zd\n", size_uc);

    size_t size_us = sizeof(unsigned short);
    printf("unsigned short: %zd\n", size_us);

    size_t size_ui = sizeof(unsigned int);
    printf("unsigned int: %zd\n", size_ui);

    size_t size_ul = sizeof(unsigned long);
    printf("unsigned long: %zd\n", size_ul);

    size_t size_ull = sizeof(unsigned long long);
    printf("unsigned long long: %zd\n", size_ull);

    size_t size_sc = sizeof(signed char);
    printf("signed char: %zd\n", size_sc);

    size_t size_ss = sizeof(signed short);
    printf("signed short: %zd\n", size_ss);

    size_t size_si = sizeof(signed int);
    printf("signed int: %zd\n", size_si);

    size_t size_sl = sizeof(signed long);
    printf("signed long: %zd\n", size_sl);

    size_t size_sll = sizeof(signed long long);
    printf("signed long long: %zd\n", size_sll);

    cout << "32767: " << sizeof(32767) << endl;
    cout << "2147483647: " << sizeof(2147483647) << endl;
    cout << "-2147483648: " << sizeof(-2147483648) << endl;
    cout << "2147483648: " << sizeof(2147483648) << endl;
    cout << "2147483648U: " << sizeof(2147483648U) << endl;
    cout << "4294967295: " << sizeof(4294967295) << endl;
    cout << "4294967295U: " << sizeof(4294967295U) << endl;
    cout << "9223372036854775807: " << sizeof(9223372036854775807) << endl;
    cout << "-9223372036854775808: " << sizeof(-9223372036854775808) << endl; // why in 16 bytes
    cout << "9223372036854775808U: " << sizeof(9223372036854775808U) << endl;
    cout << "18446744073709551615: " << sizeof(18446744073709551615) << endl; // why in 16 bytes
    cout << "18446744073709551615U: " << sizeof(18446744073709551615U) << endl;

    size_t size_f = sizeof(float);
    printf("float: %zd\n", size_f);

    size_t size_d = sizeof(double);
    printf("double: %zd\n", size_d);

    size_t size_ld = sizeof(long double);
    printf("long double : %zd\n", size_ld);

    size_t size_i8 = sizeof(int8_t);
    printf("int8_t: %zd\n", size_i8);

    size_t size_i16 = sizeof(int16_t);
    printf("int16_t: %zd\n", size_i16);

    return 0;
}