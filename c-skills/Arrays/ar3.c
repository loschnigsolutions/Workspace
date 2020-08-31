
/**
 *   Arrays - Copy array elements in reverse order
 **/

#include <stdio.h>

void main()
{
	int a[5];
	int b[5];
	int i = 0;
	int k = 0;

	while (i < 5)
	{
		a[i] = (i + 1) * 10;
		i++;
	}

	i = 0;
	while (i < 5)
	{
		b[i] = a[4 - i];
		i++;
	}

	printf("Array elements in b are:\n");
	while (k < 5)
	{
		printf("%d ", b[k]);
		k++;
	}
	printf("\n");
}
