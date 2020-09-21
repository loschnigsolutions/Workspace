
#include <stdio.h>
#include <string.h>

/*  struct employee  */

struct employee
{
	char   name[20];
	int    id;
	float  salary;
};

void main()
{
	struct employee e1;

	struct employee *p;

	p = &e1;

	strcpy(e1.name, "Ravi Kumar");
	e1.id = 45;
	e1.salary = 23.638;

	printf("Name     : %s\n", p->name);
	printf("ID       : %d\n", p->id);
	printf("salary   : %f\n", p->salary);
}
