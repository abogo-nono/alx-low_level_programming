#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Already (success)
 *
 */
int main(void)
{
	int i; j; digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 8 && j != 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
