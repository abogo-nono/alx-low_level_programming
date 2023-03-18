#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Already (success)
 *
 */
int main(void)
{

	int i;

	for (i = 74; i <= 49; i--)
	{
		printf("%c", i + '0');
	}
	printf("\n");
	return (0);
}
