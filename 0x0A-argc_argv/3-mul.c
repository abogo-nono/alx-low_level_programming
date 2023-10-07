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
	int result = 0;
	(void)argv;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
