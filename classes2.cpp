
#include <cstdio>
#include <cstdint>

struct Taxonomist {
Taxonomist() { 
printf("(no argument)\n");
}
Taxonomist(char x) { 
printf("char: %c\n", x);
}
Taxonomist(int x) { 
printf("int: %d\n", x);
}
Taxonomist(float x) { 
printf("float: %f\n", x);
}
};


void printInt(int x)
{
    printf("%d\n", x);
}

void printFloat(int x)
{
    printf("%f\n", x);
}

void printIntArray(int a[], int n)
{
   for(int i = 0 ; i < n ; i++)
   {
        printf("%d ", a[i]);        
   }
   printf("\n");
}

struct PodStruct 
{
    uint64_t a;
    char b[256];
    bool c;         

    void print()
    {
        printf("a= %llu, b= %s, c= %d\n",a,b,c);
    }
};




int main()
{

int a = 0;
int b{};
int c = {};
int d;
printInt(a);
printInt(b);
printInt(c);
printInt(d);


float f = 0.0f;
float g{};
float h={};
float i;
printFloat(f);
printFloat(g);
printFloat(h);
printFloat(i);


Taxonomist t1; 
Taxonomist t2{ 'c' }; 
Taxonomist t3{ 65537 }; 
Taxonomist t4{ 6.02e23f }; 
Taxonomist t5('g');
Taxonomist t6 = {3000};
Taxonomist t7 = {};


PodStruct luis = {45, "Luis", false};
//PodStruct nadia(44, "Nadia", true);
luis.print();
//nadia.print();


int a1[] = {14,6,7};
printIntArray(a1, 3);
int a2[4] = {1,2,3};
printIntArray(a2, 4);
int a3[10];
printIntArray(a3, 10);
int a4[10]{};
printIntArray(a4, 10);
int a5[10] = {};
printIntArray(a5, 10);


return 0;

}