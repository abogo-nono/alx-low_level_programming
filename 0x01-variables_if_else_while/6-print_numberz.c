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

	printf('\n');
	return (0);
}
