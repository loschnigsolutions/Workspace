
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
	struct stack *sp = NULL;
	int res;

	push(&sp, 10);
	push(&sp, 20);
	push(&sp, 30);
	push(&sp, 40);
	push(&sp, 50);

	res = pop(&sp);
	printf("Res : %d\n", res);
	res = pop(&sp);
	printf("Res : %d\n", res);
	res = pop(&sp);
	printf("Res : %d\n", res);
	res = pop(&sp);
	printf("Res : %d\n", res);
	res = pop(&sp);
	printf("Res : %d\n", res);
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
