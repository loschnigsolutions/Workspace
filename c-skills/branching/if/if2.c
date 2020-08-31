
#include <stdio.h>

void main()
{
	int a;
	int b;
	int c;

	printf("Enter value of a: ");
	scanf("%d", &a);

	printf("Enter value of b: ");
	scanf("%d", &b);

	printf("Enter value of c: ");
	scanf("%d", &c);

	if (a > b)
	{
		if (a > c)
		{
			printf("a is greater\n");
		}
		else
		{
			printf("c is greater\n");
		}
	}
	else	
	{
		if (b > c)
		{
			printf("b is greater\n");
		}
		else
		{
			printf("c is greater\n");
		}
	}

}
