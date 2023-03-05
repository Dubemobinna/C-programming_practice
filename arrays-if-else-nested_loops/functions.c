#include <stdio.h>
/*
 * main - Functions
 * Return: Always 0
 */

void SayHi(char name[])
{
	printf("Hello %s\n", name);
}

int main()
{
	printf("This is my territory\n");
	SayHi("Mike");
	SayHi("John");
	SayHi("Attah");
	return (0);
}
