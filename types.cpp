#include <cstdio>


int main()
{
	
	printf("sizeof(short int) = %lu\n", sizeof(short int) );
	printf("sizeof(int) = %lu\n", sizeof(int) );
	printf("sizeof(ong int) = %lu\n", sizeof(long int) );
	printf("sizeof(float) = %lu\n", sizeof(float ) );
	printf("sizeof(double) = %lu\n", sizeof(double) );
	printf("sizeof(long double) = %lu\n", sizeof(long double) );



	printf("sizeof('a') = %lu\n", sizeof('a'));
	printf("sizeof(21312131) = %lu\n", sizeof(21312131));
	printf("sizeof(2147483647) = %lu\n", sizeof(2147483647));
	printf("sizeof(2147483648) = %lu\n", sizeof(2147483648));


int array_ints[10];
long double array_double[10];
long double array_long_double[10];


printf("sizeof(array_ints) = %lu\n", sizeof(array_ints));
printf("sizeof(array_double) = %lu\n", sizeof(array_double));
printf("sizeof(array_long_double) = %lu\n", sizeof(array_long_double));


return 0;

}