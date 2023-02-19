#include <stdio.h>
/*
 * main - If statement
 * Return: Always 0
 */
int main(void)
{
	int x = 4;

	printf("What is your answer?\n");
	scanf("%d", &x);

	if (x == 4)
	{
		printf("Correct!\n");
	}
	else if (x < 4)
	{
		printf("Wrong answer, try again\n");
	}
	else if (x > 10)
	{
		printf("That's a little off, check your logic\n");
	}
	return (0);
}
