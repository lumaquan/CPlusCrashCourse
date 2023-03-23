#include <cstdio>


int step_function(int x );

int main(){
	

//	
int x= 0;
if(x>0){
	printf("Positive.");	
} 
else if(x <0){
	printf("Negative.");
} 
else{
	printf("Zero.");
} 


printf("\n");



// Listing 1-8 
int num1 = 42; 
int result1 = step_function(num1); 
int num2 = 0;
int result2 = step_function(num2);
int num3 = -32767;
int result3 = step_function(num3);
printf("Num1: %d, Step: %d\n", num1, result1); 
printf("Num2: %d, Step: %d\n", num2, result2);
printf("Num3: %d, Step: %d\n", num3, result3);



int a[] = {1,2,3,4};

for(int i = 0; i < 4; i++)
{
	printf("%d\n", a[i]);
}



return 0;


}


int step_function(int x) {
int result = 0; 
if (x < 0) 
{
	result = -1; 
} else if (x > 0) 
{
result = 1; 
}
return result; 
}