#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 9.
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = 0; j <= 98; j++)
		{
			int result = i * j;

			if (result > 9)
				_putchar(result / 10 + '0')

			_putchar(result % 10 + '0');

			if (result != 81)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
