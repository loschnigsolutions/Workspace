
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void main()
{
	int i = 0;

	printf("Game.c : (PID = %d)\n", getpid());

	while (i < 5)
	{
		printf("%s: (i = %d)\n", __func__, i);
		sleep(1);
		i++;
	}

	printf("I'm out of loop\n");
}
