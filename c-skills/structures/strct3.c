
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char name[20];
	int  rollno;
	int  marks;
};

void print(struct student *);
struct student *get_data();

void main()
{
	struct student *s1 = NULL;
	struct student *s2 = NULL;
	struct student *s3 = NULL;

	s1 = get_data();
	s2 = get_data();
	s3 = get_data();

	print(s1);
	print(s2);
	print(s3);
}

struct student *get_data()
{
	struct student *p = NULL;

	p = malloc(sizeof(struct student));

	printf("Enter name     : ");
	scanf(" %s", p->name);
	
	printf("Enter rollno   : ");
	scanf("%d", &p->rollno);
	
	printf("Enter marks    : ");
	scanf("%d", &p->marks);
	
	return p;
}

void print(struct student *p)
{
	printf("Name      :     %s\n", p->name);
	printf("rollno    :     %d\n", p->rollno);
	printf("marks     :     %d\n", p->marks);
}
