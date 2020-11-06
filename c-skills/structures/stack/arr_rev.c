
#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int data;
	struct stack *link;
};

void push(struct stack **,int);
int pop(struct stack **);

void main()
{
	int a[] = {100,200,300,400,500,600,700,800,900,1000};
	struct stack *sp = NULL;
	int i;

	for (i = 0;i < 10; i++)
		push(&sp, a[i]);

	for (i = 0;i < 10; i++)
		a[i] = pop(&sp);

	printf("Array Elements :\n");
	for (i = 0;i < 10; i++)
		printf("%d ",a[i]);

	printf("\n");
}

void push(struct stack **p, int val)
{
	struct stack *new;

	new = malloc(sizeof(struct stack));

	new->data = val;
	new->link = *p;

	*p = new;
}

int pop(struct stack **p)
{
	struct stack *temp;
	int val;

	if(*p == NULL)
	{
		printf("Stack is Empty\n");
		return 0;
	}

	val = (*p)->data;

	temp = *p;

	(*p) = (*p)->link;

	free(temp);

	return val;
}
