
#include <stdio.h>

void main()
{
	int mks = 8;

	printf("Enter your marks: ");
	scanf("%d", &mks);

	if (mks > 40)
	{
		printf("You Passed\n");
	}
	else
	{
		printf("You Failed\n");
	}

}
