#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < 10; i++)
		if ((int)str[i] % 2 == 0)
			_putchar(str[i]);
}
