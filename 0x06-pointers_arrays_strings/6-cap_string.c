#include "main.h"

/**
 * cap_string - capitalize all word after punctuation mark
 * @s: the string
 * Return: the correct string
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (
				(s[i - 1] == ' ' ||
				s[i - 1] == '\t' ||
				s[i - 1] == '\n' ||
				s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '.' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == '}') &&
				s[i] == j)
			{
				s[i] = s[i] - 32;
			}
		}
	}

	return (s);
}
