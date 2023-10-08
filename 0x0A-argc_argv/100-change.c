#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins needed to make change.
 * @amount: The amount for which change is to be made.
 *
 * Return: The minimum number of coins needed.
 */
int minCoins(int amount)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int dp[1001];
	int i, j;

	if (amount <= 0)
		return (0);

	for (i = 0; i <= amount; i++)
	{
		dp[i] = amount + 1;
	}

	dp[0] = 0;

	for (i = 1; i <= amount; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i >= coins[j])
			{
				dp[i] = (dp[i] < (dp[i - coins[j]] + 1)) ? dp[i] : (dp[i - coins[j]] + 1);
			}
		}
	}

	return (dp[amount]);
}

/**
* main - Entry point
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}

	result = minCoins(atoi(argv[1]));
	printf("%d\n", result);

	return (0);
}
