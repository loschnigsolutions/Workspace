

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void child_proc()
{
	int i = 0;

	while (i < 5)
	{
		printf("%s: %d\n", __func__, i);
		sleep(1);
		i++;
	}
}

void main()
{
	int wstatus;

	if (fork())
	{
		printf("Parent Process (PID = %d)\n", getpid());

		wait(&wstatus);

		printf("Parent Exiting .. child ret = %d\n", WEXITSTATUS(wstatus));
	}
	else
	{
		printf("Child  Process (PID = %d)\n", getpid());

		child_proc();

		exit(32);
	}
}
