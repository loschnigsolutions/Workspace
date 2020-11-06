
#include <stdio.h>
#include <stdlib.h>

struct node {

	int data;
	struct node *link;
};

void insert(struct node **,struct node **, int);
int delete(struct node **,struct node **);
void print(struct node *,struct node *);

void main()
{
	struct node *f = NULL;
	struct node *r = NULL;
	int val;

	insert(&f, &r, 100);
	insert(&f, &r, 200);
	insert(&f, &r, 300);
	insert(&f, &r, 400);
	insert(&f, &r, 500);

	val = delete(&f,&r);
	printf("Val : %d\n", val);

	val = delete(&f,&r);
	printf("Val : %d\n", val);

	val = delete(&f,&r);
	printf("Val : %d\n", val);

	val = delete(&f,&r);
	printf("Val : %d\n", val);

	val = delete(&f,&r);
	printf("Val : %d\n", val);
}


void insert(struct node **p,struct node **q, int val)
{
	struct node *new = NULL;

	new = malloc(sizeof(struct node));

	new->data = val;
	new->link = NULL;

	/* If its a first node */
	if ((*p == NULL) && (*q == NULL))
	{
		*p = new;  //front
		*q = new;  //rear

		return;
	}

	(*q)->link   =   new;
	(*q)         =   new;
}

int delete(struct node **p,struct node **q)
{
	struct node *old;
	int val;

	if (*p == NULL)
	{
		printf("No elements in queue\n");
		return 0;
	}

	val = (*p)->data;

	old = *p;

	if (*p == *q)
	{
		*p = *q = NULL;
	}
	else
	{
		*p = (*p)->link;
	}

	free(old);

	return val;
}

void print(struct node *f,struct node *r)
{
	printf("front : %p rear : %p\n",f,r);
}
