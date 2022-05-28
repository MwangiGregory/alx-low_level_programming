/**
 * _strcmp - compares two strings.
 * @s1: address of first string
 * @s2: address of second string
 *
 * Return: 15 if s1 is greater, -15 if s2 is lesser,
 * 0 if s1 and s2 are equal.
 */
int _strcmp(char *s1, char *s2)
{
	char *p1 = s1, *p2 = s2;
	unsigned char c1 = *p1;
	unsigned char c2 = *p2;

	if (!p1 || !p2)
		return (0);
	while (c1 == c2)
	{
		if (c1 == '\0')
			return (0);
		p1++;
		p2++;
		c1 = *p1;
		c2 = *p2;
	}
	return (c1 - c2);
}
