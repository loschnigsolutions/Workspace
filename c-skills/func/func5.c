
/**

   Functions - Basic Program to Demonstrate
 
   Passing and returning a value from a

   function
 
**/

#include <stdio.h>

int add(int,int,int);
int sub(int,int,int);
int multiply(int,int,int);

void main()
{
	int a;
	int b;
	int c;
	int res;

	printf("Enter a value: ");
	scanf("%d", &a);

	printf("Enter b value: ");
	scanf("%d", &b);

	printf("Enter c value: ");
	scanf("%d", &c);

	res = add(a,b,c);
	printf("Sum is %d\n", res);
	
	res = sub(a,b,c);
	printf("Diff is %d\n", res);

	res = multiply(a,b,c);
	printf("Prod is %d\n", res);
}

int add(int a,int b,int c)
{
	int res;

	res = a + b + c;

	return res;
}

int sub(int a,int b,int c)
{
	int res;

	res = a - b - c;

	return res;
}

int multiply(int a,int b,int c)
{
	int res;

	res = a * b * c;

	return res;
}
