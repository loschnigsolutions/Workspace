
/**

   Pointers - Program Demonstrates
 
   size allocated to pointers of 

   different data types
 
**/

#include <stdio.h>

void main()
{
	char    *p;
	int     *q;
	double  *r;

	printf("sizeof(char)    :   %ld\n", sizeof(char *));
	printf("sizeof(int)     :   %ld\n", sizeof(int *));
	printf("sizeof(double)  :   %ld\n", sizeof(double *));
}
