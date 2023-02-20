#include <stdio.h>
/**
 * main - Mad Lib Game
 * Return: Always 0
 */

int main(void)
{
	char color[20];
	char noun[20];
	char celeb[20];

	printf("Enter a color\n");
	scanf("%s", color);
	printf("Enter a noun\n");
	scanf("%s", noun);
	printf("Enter a celeb\n");
	scanf("%s", celeb);

	printf("Roses are %s\n", color);
	printf("%s are blue\n", noun);
	printf("I love %s\n", celeb);

	return (0);
}
