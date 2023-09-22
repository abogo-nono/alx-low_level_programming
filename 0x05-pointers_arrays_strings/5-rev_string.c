#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		;

	j = i - 1;

	for (i = 0; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
