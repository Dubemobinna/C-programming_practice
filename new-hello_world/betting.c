#include <stdio.h>
/**
 * main - Betting site
 * Return: Always 0
 */
int main(void)
{
	int age;

	printf("What is your age?\n");
	scanf("%d", &age);

	if (age > 18)
		printf("You are ready to start betting\n");
	else if (age < 18)
		printf("You are not of age\n");

	return (0);
}
