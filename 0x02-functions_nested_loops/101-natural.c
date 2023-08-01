#include <stdio.h>
#include "main.h"

/**
 * sum_of_multiple_of_3_or_5_blow_1024 - print sum of all multiple of 3|4<1024
 * Return: void
 */
void sum_of_multiple_of_3_or_5_blow_1024(void)
{
	int s = 0, i;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			s += i;
	printf("%d\n", s);
}
