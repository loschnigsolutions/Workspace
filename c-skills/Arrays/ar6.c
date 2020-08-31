
/**
 *   Arrays - Find Common elements between two arrays
 **/

#include <stdio.h>

void main()
{
	int a[5];
	int b[5];
	int i = 0;
	int j = 0;

	printf("Enter array elements for a:\n");

	i = 0;
	while (i < 5)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);

		i++;
	}

	printf("Enter array elements for b:\n");

	i = 0;
	while (i < 5)
	{
		printf("b[%d]: ", i);
		scanf("%d", &b[i]);

		i++;
	}

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			if (a[i] == b[j])
			{
				printf("Elements are common at (a[%d],b[%d])\n",i,j);
			}

			j++;
		}

		i++;
	}

}
