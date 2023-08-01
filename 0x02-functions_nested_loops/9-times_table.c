#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 9.
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((result / 10) == 0)
			{
				if (j == 0)
					_putchar('0');
				if (j != 0)
				{
					_putchar(' ');
					_putchar((result % 10) + '0');
				}
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
