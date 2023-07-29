/**
 * _islower - A function that checks for lowercase character
 *
 * @c: the char to check
 *
 * Return: 1 if it's an alphabetic char and 0 else
 */
int _islower(int c)
{
	for (i = 97; i < 123; i++)
		if (c == i)
			return (1);

	return (0);
}
