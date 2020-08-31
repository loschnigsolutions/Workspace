
/**

   Functions - Basic Program to Demonstrate
 
   Order of functions execution
 
**/

#include <stdio.h>

void main()
{
	printf("I'm in main entry 1\n");

	play();

	getit();

	printf("I'm in play exit 8\n");
}

void getit()
{
	printf("I'm in getit entry \n");
	printf("I'm in getit exit  \n");
}

void game()
{
	printf("I'm in game entry 3\n");

	class();

	printf("I'm in game exit 6\n");
}

void play()
{
	printf("I'm in play entry 2\n");

	game();

	printf("I'm in play exit 7\n");
}


void class()
{
	printf("I'm in class entry 4\n");

	printf("I'm in class exit 5\n");
}
