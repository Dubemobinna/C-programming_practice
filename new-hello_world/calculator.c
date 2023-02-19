#include <stdio.h>
/**
 * main - Basic Calculator
 * Return: Always 0
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("Enter your first number\n");
	scanf("%d", &num1);
	printf("Enter your second number\n");
	scanf("%d", &num2);
	printf("Enter your third number\n");
	scanf("%d", &num3);
	printf("%d\n", num1 * num2 + num3);

	return (0);
}
