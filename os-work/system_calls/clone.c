
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>

#define STACK_SIZE  (1024 * 1024)  //1MB

int myfunc(void *arg)
{
	int i = 0;

	printf("Child process (PID = %d)\n", getpid());

	while (i  < 5)
	{
		printf("%s: Hello World (i = %d)\n", __func__, i);
		sleep(1);
		i++;
	}

	return 0;
}

void main()
{
	char *stack = malloc(STACK_SIZE);

	char *stack_head = stack + STACK_SIZE;

	clone(myfunc, stack_head, SIGCHLD, NULL);

	printf("Parent process (PID =%d)\n", getpid());

	wait(NULL);
}
