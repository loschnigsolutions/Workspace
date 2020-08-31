
/**

   Functions - Basic Program to Demonstrate
 
   function that calculates power of a 
   
   number
 
**/

#include <stdio.h>

int cal_pow(int,int);

void main()
{
	int base;
	int power;
	int result;

	printf("Enter base  : ");
	scanf("%d", &base);

	printf("Enter power : ");
	scanf("%d", &power);

	result = cal_pow(base, power);

	printf("%d ^ %d = %d\n", base, power, result);
}


int cal_pow(int b, int p)
{
	int i = 0;
	int total = 1;

	while (i < p)
	{
		total *= b;

		i++;
	}

	return total;
}	
