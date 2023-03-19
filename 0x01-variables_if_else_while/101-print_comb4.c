#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Already (success)
 *
 */
int main(void)
{

	int i, j, k;
	int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(digits[i] + '0');
				putchar(digits[j] + '0');
				putchar(digits[k] + '0');
				if (i == 7 && j == 8 && k == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	printf("\n");
	return (0);
}
