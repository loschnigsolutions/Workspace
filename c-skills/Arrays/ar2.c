
/**
 *   Arrays - Initializing array elements at compile time
 **/

#include <stdio.h>

void main()
{
	int a[20];
	int i = 0;

	while (i < 20)
	{
		a[i] = (i + 1) * 10;
		i++;
	}
}
