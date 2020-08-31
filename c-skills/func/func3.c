
/**

   Functions - Basic Program to Demonstrate
 
   Function that checks wether given value

   is even or odd
 
**/

#include <stdio.h>

void check_eo(int);

void main()
{
	int var;

	printf("Enter a value : ");
	scanf("%d", &var);

	check_eo(var);
}


void check_eo(int k)
{

	if ((k % 2) == 0)
	{
		printf("It is an even number\n");
	}
	else
	{
		printf("It is an odd number\n");
	}
}
