
#include <stdio.h>

void main()
{
	int lmt;

	printf("Enter max Value: ");
	scanf("%d", &lmt);

	while (lmt >= 0)
	{
		printf("%d ", lmt);
		lmt--;
	}

	printf("\n");
}
