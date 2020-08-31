
#include <stdio.h>

void main()
{
	int a;


	printf("Enter a Value: ");
	scanf("%d", &a);

	switch(a)
	{
		case 0:
			printf("This is case-0\n");
			break;
		case 1:
			printf("This is case-1\n");
			break;
		case 2:
			printf("This is case-2\n");
			break;
		case 3:
			printf("This is case-3\n");
			break;
		case 4:
			printf("This is case-4\n");
			break;

		default:
			printf("This is default case\n");

	}
}
