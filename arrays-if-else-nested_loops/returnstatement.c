#include <stdio.h>
#include <stdlib.h>

/*
 * main - Return Statement
 * Return: Returns a value
 */

double cube(double num)
{
	double result = num * num * num;
	return result;
}

int main(void)
{
	printf("%f\n", cube(3.0));
	return (0);
}
