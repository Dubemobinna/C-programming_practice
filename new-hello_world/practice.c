#include <stdio.h>
/*
 * main - If statement
 * Return: Always 0
 */
int main(void)
{
	char name [20];

	printf("What's your name?\n");
	fgets(name, 20, stdin);
	printf("Your name is %s\n", name);
	return (0);
}
