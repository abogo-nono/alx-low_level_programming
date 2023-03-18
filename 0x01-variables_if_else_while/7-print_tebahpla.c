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

	for (i = 74; i > 48; i--)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
