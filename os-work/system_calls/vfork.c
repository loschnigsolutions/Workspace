
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int a = 100;

void main()
{
	if (vfork())
	{
		printf("Parent Process  (PID = %d)\n", getpid());

		sleep(5);

		printf("Value in a = %d\n", a);
	}
	else
	{
		printf("Child Process  (PID = %d)\n", getpid());

		a = 500;

		exit(0);
	}
}
