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

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 49; i < 55; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
