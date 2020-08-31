
/**

   Pointers - Basic Program to Demonstrate
 
   Accessing of Memory location using 

   single and double pointer
 
**/

#include <stdio.h>

void main()
{
	int var = 2000;

	int *p;

	int **q;

	p = &var;

	q = &p;


	**q = 3202;
	*p  = 120;

	printf("Value in q:  %p\n",  q);
	printf("Addr of &p:  %p\n",  &p);

	printf("\n");

	printf("Value in *q: %p\n",  *q);
	printf("Value in  p: %p\n",  p);

	printf("\n");

	printf("Value in **q:  %d\n", **q);
	printf("Value in  *p:  %d\n",  *p);
	printf("Value in var:  %d\n", var);
}
