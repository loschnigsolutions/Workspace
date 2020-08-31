
#include <stdio.h>

void main()
{
	int lmt;
	int n = 0;

	printf("Enter max value: ");
	scanf("%d", &lmt);

	while (n < lmt)
	{
		printf("%d ", n);
		n++;
	}

	printf("\n");

}
