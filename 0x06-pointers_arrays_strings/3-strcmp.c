/**
 * _strcmp - compares two strings.
 * @s1: address of first string
 * @s2: address of second string
 *
 * Return: 1 if s1 is longer, -1 if s2 is longer,
 * 0 if s1 and s2 are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char c = s1[0];
	char ch = s2[0];

	while (c)
	{
		i++;
		c = s1[i];
	}
	while (ch)
	{
		j++;
		ch = s2[j];
	}
	if (i == j)
	{
		return (0);
	}
	else if (i > j)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

}
