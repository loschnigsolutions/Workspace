
#include <stdio.h>

void main()
{
	int i = 0;
	int n;

	printf("Enter No of times you want to print: ");
	scanf("%d", &n);

	while (i < n)
	{
		printf("(i = %d): Hey There\n", i);
		i++;
	}
}
