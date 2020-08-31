
#include <stdio.h>

void main()
{
	int var1,var2,res;
	int optn;

	printf("Enter a Value: ");
	scanf("%d", &var1);

	printf("Enter b Value: ");
	scanf("%d", &var2);

start:
	printf("\nSelect any one Option:\n\n");

	printf("1) Addition\n");
	printf("2) Subraction\n");
	printf("3) Multiplication\n");
	printf("4) Division\n");

	printf("\nSelect your Option: ");
	scanf("%d", &optn);

	switch (optn)
	{
		case 1:
			res = var1 + var2;
			break;
		case 2:
			res = var1 - var2;
			break;
		case 3:
			res = var1 * var2;
			break;
		case 4:
			res = var1 / var2;
			break;
		default:
			printf("Please enter Valid output\n");
			goto start;
	}

	printf("\nResult is %d\n", res);
}
