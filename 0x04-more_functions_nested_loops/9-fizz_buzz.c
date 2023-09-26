#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Return: voi
*/
int main(void)
{
	int min = 1, max = 100, i;

	for (i = min; i <= max; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
