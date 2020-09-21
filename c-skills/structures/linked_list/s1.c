
#include <stdio.h>


struct node 
{
	int data;
	struct node *link;
};

void print(struct node *);

void main()
{
	struct node *n1,*n2,*n3,*n4,*n5;
	struct node *p = NULL;

	n1 = malloc(sizeof(struct node));
	n2 = malloc(sizeof(struct node));
	n3 = malloc(sizeof(struct node));
	n4 = malloc(sizeof(struct node));
	n5 = malloc(sizeof(struct node));

	n1->data = 1000;
	n2->data = 2000;
	n3->data = 3000;
	n4->data = 4000;
	n5->data = 5000;

	n1->link = n2;
	n2->link = n3;
	n3->link = n4;
	n4->link = n5;
	n5->link = NULL;

	print(n1);

}

void print(struct node *p)
{
	while (p != NULL)
	{
		printf("Data : %d\n", p->data);
		p = p->link;
	}
}
