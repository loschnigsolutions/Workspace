
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;

	struct node *nlink;
	struct node *plink;
};

struct node *createnode(struct node *,int);
void print(struct node *);

void main()
{
	int i = 0;
	struct node *p = NULL;

	p = createnode(p, 100);
	p = createnode(p, 200);
	p = createnode(p, 300);
	p = createnode(p, 400);
	p = createnode(p, 500);

	print(p);
}


struct node *createnode(struct node *p,int val)
{
	struct node *start = p;
	struct node *new;

	new = malloc(sizeof(struct node));

	new->data = val;
	new->nlink = NULL;

	if (p == NULL)
		return new;

	while (p->nlink != NULL)
		p = p->nlink;

	p->nlink = new;

	return start;
}

void print(struct node *p)
{
	while (p != NULL)
	{
		printf("(p : %p)  (p->data : %d)  (p->nlink : %p)\n", p, p->data, p->link);
		p = p->nlink;
	}
}
