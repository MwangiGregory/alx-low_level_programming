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
	char *str1 = s1, *str2 = s2;

	if (!str1 || !str2)
		return (0);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return (0);
		str1++;
		str2++;
	}
	return (*str1 > *str2 ? 15 : -15);
}
