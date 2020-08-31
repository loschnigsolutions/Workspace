
/**

   Functions - Basic Program to Demonstrate
 
   Using of pre-defined function pow 

   defined in math.h
 
**/

#include <stdio.h>
#include <math.h>

void main()
{
	int a;
	int b;
	int res;

	printf("Enter a value: ");
	scanf("%d", &a);

	printf("Enter b value: ");
	scanf("%d", &b);

	res = pow(a,b);

	printf("result is %d\n", res);
}
