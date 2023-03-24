#include <cstdio>


void insertion_sort(int a[], int N);
void printArrayInts(int a[], int N );





int main()
{

//	sizes of must important types in C++
printf("sizeof(short int) = %lu\n", sizeof(short int) );
printf("sizeof(int) = %lu\n", sizeof(int) );
printf("sizeof(long int) = %lu\n", sizeof(long int) );
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
