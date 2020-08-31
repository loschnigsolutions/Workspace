
/**

   Pointers - Basic Program to Demonstrate
 
   Accessing an array using pointer
 
**/

#include <stdio.h>

void main()
{
	int a[5] = {10, 20, 30, 40, 50};

	int *p, i = 0;

	p = &a[0];

	printf("Val = %d\n", p[0]);
	printf("Val = %d\n", p[1]);
	printf("Val = %d\n", p[2]);
	printf("Val = %d\n", p[3]);
	printf("Val = %d\n", p[4]);

}
