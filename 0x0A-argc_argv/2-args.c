#include <stdio.h>

/**
 * main - Entry point
 * @argc: number arguments passed to gcc
 * @argv: table of passed arguments
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int i;
	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
