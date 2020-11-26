
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


void main()
{

	if (fork())
	{
		printf("Parent (PID = %d) \n", getpid());

	}
	else
	{
		printf("Child  (PID = %d) \n", getpid());
	}

}

