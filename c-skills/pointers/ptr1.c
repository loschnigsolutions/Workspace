
/**

   Pointers - Basic Program to Demonstrate
 
   Accessing of Memory location using 

   pointers
 
**/

#include <stdio.h>

void main()
{
	int var = 30;

	int *p = NULL;

	p = &var;

	printf("Addr p      : %p\n", p);
	printf("Addr &var   : %p\n", &var);

	printf("Value *p    : %d\n", *p);
	printf("Value var   : %d\n", var);
}
