#include <stdio.h>

/*
 * main - Practicing switch statements
 * Return: Always 0
 */

int main(void)
{
	char grade = 'G';

	switch(grade)
	{
	case 'A' :
		printf("You did great!\n");
		break;
	case 'B' :
		printf("You did alright!\n");
		break;
	case 'C' :
		printf("You did poorly\n");
		break;
	case 'D' :
		printf("You did very bad\n");
		break;
	case 'F' :
		printf("You failed!\n");
		break;
	default :
		printf("Invalid Grade\n");
	}
	return (0);
}
