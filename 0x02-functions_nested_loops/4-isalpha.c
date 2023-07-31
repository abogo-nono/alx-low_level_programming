/**
 * _isalpha - A function that checks for alphabet character
 *
 * @c: the char to check
 *
 * Return: 1 if it's an alphabetic char and 0 else
 */
int _isalpha(int c)
{
	int i, j;

	for (i = 97; i < 123; i++)
		if (c == i)
			return (1);

	for (j = 65; j < 91; j++)
		if (c == j)
			return (1);

	return (0);
}
