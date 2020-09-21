
#include <stdio.h>

struct play
{
	char   a;
	int    b;
	float  c;
};

void main()
{
	struct play p;

	p.a = 'A';
	p.b = 23;
	p.c = 63.548;

	printf("%c  %d  %f\n", p.a, p.b, p.c);
}

