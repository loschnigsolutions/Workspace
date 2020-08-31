
/**

   Functions - Basic Program to Demonstrate
 
   Functions that calculates 
   
   addition, 

   subtraction, 
   
   multiplication
 
**/

#include <stdio.h>

void add(int,int,int);
void sub(int,int,int);
void multiply(int,int,int);


void main()
{
	int a;
	int b;
	int c;

	printf("Enter a value: ");
	scanf("%d", &a);

	printf("Enter b value: ");
	scanf("%d", &b);

	printf("Enter c value: ");
	scanf("%d", &c);

	add(a,b,c);
	sub(a,b,c);
	multiply(a,b,c);
}

void add(int a,int b,int c)
{
	int res;

	res = a + b + c;

	printf("Sum is %d\n", res);
}

void sub(int a,int b,int c)
{
	int res;

	res = a - b - c;

	printf("Diff is %d\n", res);
}

void multiply(int a,int b,int c)
{
	int res;

	res = a * b * c;

	printf("Prod is %d\n", res);
}
