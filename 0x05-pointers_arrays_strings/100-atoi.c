#include "main.h"

/**
 * _atoi - convert a string to number
 * @s: the string passed
 * Return: the number
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			i++;
		else
			break;
	}

	return (sign * result);
}
