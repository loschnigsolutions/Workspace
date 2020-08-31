
#include <stdio.h>

void main()
{
	int rollno;
	int marks;

	printf("Enter your rollno: ");
	scanf("%d", &rollno);

	if (rollno <= 50)
	{
		printf("Enter your marks: ");
		scanf("%d", &marks);

		if (marks > 30)
		{
			printf("You Passed\n");
		}
		else
		{
			printf("You Failed\n");
		}
	}
	else
	{
		printf("Your rollno is IN-VALID\n");
	}
}
