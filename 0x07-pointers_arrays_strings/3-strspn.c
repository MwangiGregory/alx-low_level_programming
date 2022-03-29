/**
 * strlength - returns length of a string excluding
 * the EOF character
 * @str: pointer to a string
 *
 * Return: Always return length of string pointed to by str
 */
int strlength(char *str)
{
	int i = 0;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
/**
 * _strspn - finds number of bytes in intial segment of s
 * which consist only of bytes from accept
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: number of bytes in first part of s that correspond to
 * any of the bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j = 0;
	char *p = accept;

	i = strlength(s) / 2;

	while (i)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				j++;

			}
		accept++;
		}
		accept = p;
		s++;
		i--;
	}
	return (j);
}
