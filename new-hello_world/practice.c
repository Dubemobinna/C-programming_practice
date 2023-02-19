#include <stdio.h>
#include <stdlib.h>
/*
 * main - Writer's Broker
 *
 * Description:'Data Collection'
 *
 * Return: Always 0
 */
int main(void)
{
	char grade;

	printf("What is your grade?\n");
	scanf("%c", &grade);
	printf("Your grade is %c\n", grade);
	return (0);
}
