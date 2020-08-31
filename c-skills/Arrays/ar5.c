
/**
 *   Arrays - Search an element in an array
 **/

#include <stdio.h>

void main()
{
	int a[5];
	int i;
	int se;

	printf("Enter array elements: \n");

	i = 0;
	while (i < 5)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
		i++;
	}

	printf("Enter element you want: ");
	scanf("%d", &se);

	i = 0;
	while (i < 5)
	{
		if (a[i] == se)
		{
			printf("Element found at a[%d]\n", i);
			break;
		}

		i++;
	}

	if (i == 5)
	{
		printf("Element not found\n");
	}	

}
