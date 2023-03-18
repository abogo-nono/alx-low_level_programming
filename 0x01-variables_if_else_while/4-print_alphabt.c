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
	char x;

	for (i = 49; i < 75; i++)
	{
		x = i + '0';
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	putchar("\n");
	return (0);
}
