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
	int i, result = 0;
	(void)argv;

	for (i = 1; i < argc; i++)
		if (atoi(argv[i]))
			result += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}

	printf("%d\n", result);

	return (0);
}
