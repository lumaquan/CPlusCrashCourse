#include <stdio.h>
#include <stdarg.h>

double average(int, ...);

int main()
{

double w = 37.5;
double x = 22.5;
double y = 1.7;
double z = 10.2;

printf("%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n\n", "w = ", w, "x = ", x, "y = ", y, "z = ", z);

printf( "%s%.3f\n%s%.3f\n%s%.3f\n", 
    "The average of w and x is ", average( 2, w, x ),
    "The average of w, x, and y is ",average( 3, w, x, y ) ,
    "The average of w, x, y, and z is ",average( 4, w, x, y, z  ) 
      );


return 0; 
}

double average(int i, ...)
{
    double total = 0;
    int j;
    va_list ap;
    va_start(ap, i);
    for (j = 1; j  <=  i; j++)
    {
        total+=va_arg(ap, double);
    }
    va_end(ap);
    return total/i;
}