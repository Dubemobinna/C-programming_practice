#include <stdio.h>
#include <stdlib.h>

/*
 * main - If statement
 * Return: Return a value
 */

int num(int num1, int num2)
{
	int result;
	
	if(num1 > num2){
		result = num1;
	}
	else if(num2 > num1){
		result = num2;
	}
	return result;
}

int main(void)
{
	printf("%d\n", num(7, 9));
	return (0);
}
