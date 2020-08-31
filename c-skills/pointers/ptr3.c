
#include <stdio.h>

/**

   Pointers - Basic Program to Demonstrate
 
   Accessing of 1-byte in a 4-byte integer

   using char pointer.
 
**/

 a -> |        |        |       |   6   |
        byte3    byte2    byte1   byte0

void main()
{
	int a = 1610615046;

	char *p;

	p = &a;


	printf("*p[0] = %d\n", p[0]);
	printf("*p[1] = %d\n", p[1]);
	printf("*p[2] = %d\n", p[2]);
	printf("*p[3] = %d\n", p[3]);
}
