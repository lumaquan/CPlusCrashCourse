#include <cstdio>
#include <cstddef>


void insertion_sort(int a[], int N);
void printArrayInts(int a[], int N );


void myf(std::nullptr_t)
{
   printf("null pointer overload\n");
}


int main()
{

//	sizes of must important types in C++
printf("sizeof(short int) = %lu\n", sizeof(short int) );
printf("sizeof(int) = %lu\n", sizeof(int) );
printf("sizeof(long int) = %lu\n", sizeof(long int) );
printf("sizeof(long long) = %lu\n", sizeof(long long) );
printf("sizeof(float) = %lu\n", sizeof(float ) );
printf("sizeof(double) = %lu\n", sizeof(double) );
printf("sizeof(long double) = %lu\n", sizeof(long double) );


	// sizes of literals
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




float pi_f = 3.1415926535897932384626433832795;
double pi_d = 3.1415926535897932384;
long double pi_ld = 3.1415926535897932384626433832795L;


printf("pi_f = %f\n", pi_f);
printf("pi_f = %e\n", pi_f);
printf("pi_f = %g\n", pi_f);

printf("pi_d = %lf\n", pi_d);
printf("pi_d = %le\n", pi_d);
printf("pi_d = %lg\n", pi_d);

printf("pi_ld = %Lf\n", pi_ld);
printf("pi_ld = %Le\n", pi_ld);
printf("pi_ld = %Lg\n", pi_ld);



// Does not work at firs try 
// printf("unicode = %c\n", '\u0041');


bool isSorted = 24;
bool isMaxheap = true;
printf("isSorted = %d\n", isSorted);
printf("isMaxheap = %d\n",isMaxheap);

int N = sizeof(array_ints)/sizeof(int);

for (int i = 0; i < N; ++i)
{
   array_ints[i] = 37-2*i;
}

insertion_sort(array_ints, N);

printArrayInts(array_ints, N);


bool t = true;
bool f = false;
printf("!true: %d\n", !t); 
printf("true && false: %d\n", t && f); 
printf("true && !false: %d\n", t && !f); 
printf("true || false: %d\n", t || f); 
printf("false || false: %d\n", f || f);



// std::byte is C++17

myf(nullptr); 

int binary_literal_C14 = 0b11111111111111111111111111111111; 
printf("%d\n",binary_literal_C14);
printf("%u\n",binary_literal_C14);
printf("%x\n",binary_literal_C14);


long binary_long_C14 = 0b1111111111111111111111111111111111111111111111111111111111111111;
printf("%ld \n",binary_long_C14);   // long format
printf("%lu \n",binary_long_C14);   // unsigned long format


//char* c;
//gets(c);   // deprecated in C++14 

char a[100000]; 
size_t val = sizeof(a);
printf("%ld\n", val);


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


size_t size_uc = sizeof(unsigned char); 
printf("unsigned char: %zd\n", size_uc);
size_t size_us = sizeof(unsigned short); 
printf("unsigned short: %zd\n", size_us);
size_t size_ui = sizeof(unsigned int); 
printf("unsigned int: %zd\n", size_ui);
size_t size_ul = sizeof(unsigned long); 
printf("unsigned long: %zd\n", size_ul);


size_t size_f= sizeof(float); 
printf("float: %zd\n", size_f);
size_t size_d = sizeof(double); 
printf("double : %zd\n", size_d);
size_t size_ld = sizeof(long double); 
printf("long double : %zd\n", size_ld);

return 0;

}







void insertion_sort(int a[], int N)
{
for(int i = 1; i < N; i++)
{
	int val = a[i];
	int j = i-1;
	while(j>= 0 &&  val < a[j])
	{
		a[j+1] = a[j];
		j--;
	}
	a[j+1] = val;
}
}


void printArrayInts(int a[], int N )
{
for (int i = 0; i < N; ++i)
{
	printf("%d\n", a[i]);
}

}
