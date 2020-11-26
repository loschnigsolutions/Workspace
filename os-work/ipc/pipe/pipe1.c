
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

void main()
{
	char buff[20];
	int fd[2];

	pipe(fd);

	if (fork())
	{
		printf("Parent Process (PID: %d)\n", getpid());

		read(fd[0], buff, 20);

		printf("Parent Process Received Data: %s\n", buff);

		write(fd[1], "Thanks", 7);

	}
	else
	{
		printf("Child Process (PID: %d)\n", getpid());

		strcpy(buff, "Hey Im playing");

		write(fd[1], buff, 20);

		sleep(1);

		read(fd[0], buff, 7);

		printf("Child Process Data received is %s\n", buff);
	}
}
