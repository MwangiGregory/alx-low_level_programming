/**
 * _islower - checks for a lower case character.
 * @c: character to be tested.
 *
 * Return: Is lowercase 1, Is not lowercase 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
