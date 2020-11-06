
#include <stdint.h>

int a;
int b = 200;

const int p = 23;

void func();
void play();
void game();

int main(void)
{
	static int var = 100;
	int b = 200;
	int c;

	c = a + b;

	func();

	while (1);
}

void func()
{
	int a = 100;

	a = a * 2;

	play();
}

void play()
{
	int b = 300;
	int c = 400;

	c = b + c;

	game();
}

void game()
{
	int k = 90;

	k = 5 * k;
}
