
#include <stdio.h>


void power(int base,int pow)
{
	int i = 0,b = pow;
	int res = 1;

	while (pow > 0)
	{
		res *= base;
		pow--;
	}

	printf("power(%d,%d) = %d\n" ,base ,b ,res);
}

void fact(int n)
{
	int g = n;
	int m = 1;

	while (n != 0)
	{
		m *= n;
		n--;
	}

	printf("fact(%d): %d\n",g ,m);
}

