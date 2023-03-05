#include <stdio.h>
/*
 * main - Functions
 * Return: Always 0
 */

void SayHi(char name[], int age)
{
	printf("Hello %s, you will be %d next year\n", name, age);
}

int main()
{
	printf("This is my territory\n");
	SayHi("Mike", 40);
	SayHi("John", 35);
	SayHi("Attah", 60);
	return (0);
}
