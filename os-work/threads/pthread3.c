

#include <stdio.h>
#include <pthread.h>

pthread_cond_t   cond   =  PTHREAD_COND_INITIALIZER;
pthread_mutex_t  mutex  =  PTHREAD_MUTEX_INITIALIZER;


void func()
{
	int i = 65;


	while (i <= 'Z')
	{
		printf("%c ", i);
		i++;
	}
	printf("\n");


}

void *func1(void *arg)
{
	pthread_mutex_lock(&mutex);

	pthread_cond_wait(&cond, &mutex);

	func();

	pthread_mutex_unlock(&mutex);

	printf("%s: Thread Running\n", __func__);

	printf("Im bout to exit Good bye\n");

	sleep(40);
}

void *func2(void *arg)
{
	printf("%s: Thread Running\n", __func__);

	func();

	pthread_cond_signal(&cond);

	sleep(50);
}


void main()
{
	pthread_t tid1,tid2;

	printf("pid = %d\n", getpid());

	pthread_create(&tid1, NULL, func1, NULL);
	pthread_create(&tid2, NULL, func2, NULL);

	pthread_join(tid2, NULL);
	pthread_join(tid1, NULL);

	while(1);
}
