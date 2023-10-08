#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number arguments passed to gcc
 * @argv: table of passed arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int result = 0, rest = atoi(argv[1]);
	(void)argv;

	if (argc != 1)
	{
		printf("0\n");	
		return (1);
	}

	if (rest >= 25)
	{
		rest = rest - 25;
		result += 1;
		while (rest >= 25)
		{
			if (rest - 25 < 0)
			{
				break;
			}
			rest = rest - 25;
			result += 1;
		}
	}
	if (rest >= 10)
	{
		rest = rest - 10;
		result += 1;
		while (rest >= 10)
		{
			if (rest - 10 < 0)
			{
				break;
			}
			rest = rest - 10;
			result += 1;
		}
	}
	if (rest >= 5)
	{
		rest = rest - 5;
		result += 1;
		while (rest >= 5)
		{
			if (rest - 5 < 0)
			{
				break;
			}
			rest = rest - 5;
			result += 1;
		}
	}
	if (rest >= 2)
	{
		rest = rest - 2;
		result += 1;
		while (rest >= 2)
		{
			if (rest - 2 < 0)
			{
				break;
			}
			rest = rest - 2;
			result += 1;
		}
	}
	if (rest >= 1)
	{
		rest = rest - 1;
		result += 1;
		while (rest >= 1)
		{
			if (rest - 1 < 0)
			{
				break;
			}
			rest = rest - 1;
			result += 1;
		}
	}
	printf("%d\n", result);

	return (0);

}