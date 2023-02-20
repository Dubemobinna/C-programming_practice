#include <stdio.h>
/**
 * main - Basic Calculator
 * Return: Always 0
 */

int main(void)
{
	double num1;
	double num2;
	double num3;

	printf("Enter your first number\n");
	scanf("%lf", &num1);
	printf("Enter your second number\n");
	scanf("%lf", &num2);
	printf("Enter your third number\n");
	scanf("%lf", &num3);
	printf("%f\n", num1 * num2 + num3);

	return (0);
}
