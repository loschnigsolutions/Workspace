
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int data;

	struct node *next;
};

void print(struct node *);
struct node *createnode(struct node *, int);

void main()
{
	int i = 0,info;
	struct node *e = NULL;

	while (i < 5)
	{
		printf("Enter your marks : ");
		scanf("%d", &info);
		
		e = createnode(e, info);

		i++;
	}

	printf("Linked List : \n");
	print(e);
}

struct node *createnode(struct node *p, int val)
{
	struct node *s = p;

	if (p == NULL)
	{
		p = malloc(sizeof(struct node));

		p->data = val;
		p->next = NULL;

		return p;
	}

	while (p->next != NULL)
		p = p->next;

	p->next = malloc(sizeof(struct node));

	p->next->data = val;
	p->next->next = NULL;

	return s;
}

void print(struct node *p)
{
	while (p != NULL)
	{
		printf("(ca : %p) p->data : %d  (na : %p)\n", p, p->data, p->next);
		p = p->next;
	}
}
