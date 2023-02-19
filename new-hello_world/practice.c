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
	double gpa;

	printf("What is your gpa?\n");
	scanf("%lf", &gpa);
	printf("Your gpa is %f\n", gpa);
	return (0);
}
