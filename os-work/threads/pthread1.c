
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>


void *func1(void *arg)
{
	while (1)
	{
		//printf("Goodbye (arg = %d)\n", *(int *)arg);
		//sleep(2);
	}
}

void *func2(void *arg)
{
	while (1)
	{
		//printf("Hey there (arg = %d))\n", *(int *)arg);
		//sleep(1);
	}
}


void *func3(void *arg)
{
	while (1)
	{
		//printf("Hey there (arg = %d))\n", *(int *)arg);
		//sleep(1);
	}
}

void main()
{
	pthread_t tid1,tid2,tid3;

	int val1,val2;

	val1 = 10;

	pthread_create(&tid1, NULL, func1, &val1);

	val2 = -30;

	pthread_create(&tid2, NULL, func2, &val2);
	pthread_create(&tid3, NULL, func3, NULL);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);
}
