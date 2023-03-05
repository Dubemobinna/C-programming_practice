#include <stdio.h>
#include <stdlib.h>

/*
 * main - Return Statement
 * Return: Returns a value
 */

int add(int num)
{
	int result = num + num + num;
	return result;
}

int main(void)
{
	printf("%d\n", add(3));
	return (0);
}
