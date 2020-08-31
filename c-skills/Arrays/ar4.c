
/**
 *   Arrays - Enter array elements at run time
 **/

#include <stdio.h>

void main()
{
	int a[5];
	int i = 0;

	printf("Enter array elements: \n");

	while (i < 5)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
		i++;
	}

	i = 0;

	printf("Elements are: \n");
	while (i < 5)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}
