
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


void main()
{
	char *const Argv[] = {NULL};

	if (fork())
	{
		printf("I'm parent (PID = %d)\n", getpid());
		wait(NULL);
	}
	else
	{
		execv("./play/game", Argv);
	}

	printf("Hey there I'm exiting\n");
}
