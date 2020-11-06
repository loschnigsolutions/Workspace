
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>

#define MAX  10000000

pthread_mutex_t mutex;

int var = 0;

void func(int k)
{
	pthread_mutex_lock(&mutex);

	var = var + k;

	pthread_mutex_unlock(&mutex);
}

void *func_sub(void *arg)
{
	int i = 0;

	while (i < MAX)
	{
		func(-1);
		i++;
	}
}

void *func_add(void *arg)
{
	int i = 0;

	while (i < MAX)
	{
		func(1);
		i++;
	}
}


void main()
{
	int pid;
	pthread_t tid1,tid2;

	pid = getpid();

	printf("Process ID is %d\n", pid);

	pthread_create(&tid1, NULL, func_add, NULL);
	pthread_create(&tid2, NULL, func_sub, NULL);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);

	printf("Var = %d\n", var);

	while (1);
}
