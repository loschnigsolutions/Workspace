
#include <stdio.h>
#include <dlfcn.h>
#include <math.h>

void main()
{
	int var, val;
	void (*fnptr1)(int,int);
	void (*fnptr2)(void);
	void *handle;

	printf("Enter an option : ");
	scanf("%d", &var);

	if (var == 0)
	{
		handle = dlopen("/home/mosey/c_lib/dynamic/run_time/libtest.so", RTLD_NOW);

		fnptr1 = dlsym(handle, "power");
		fnptr2 = dlsym(handle, "print_hello");

		fnptr2();

		fnptr1(5,2);
		fnptr1(10,3);

		fnptr2 = dlsym(handle, "print_goodbye");

		fnptr2();

		dlclose(handle);
	}
	else
	{
		printf("Hello World\n");
		printf("Im doing good\n");
		val = pow(5,2);
		printf("Result is %d\n", val);
		val = pow(10,3);
		printf("Result is %d\n", val);
		printf("GoodBye\n");
	}

	printf("Program ended\n");
}
