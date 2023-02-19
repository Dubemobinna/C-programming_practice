#include <stdio.h>
/*
 * main - Writer's Broker
 *
 * Description:'Data Collection'
 *
 * Return: Always 0
 */
int main(void)
{
	int age;

	printf("What is your age?\n");
	scanf("%d", &age);
	printf("You are welcome to Writer's Broker\n");
	printf("You are %d years old\n", age);
	return (0);
}
