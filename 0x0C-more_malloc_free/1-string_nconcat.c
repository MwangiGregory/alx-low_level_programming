#include <stdlib.h>

/**
 * _strlen - find the length of a string using recursion
 * @s: pointer to a string
 *
 * Return: Always the length of string pointed to by s. Length excludes
 * the EOF character
 */
unsigned int _strlen(char *s)
{
	char *str = s;

	if (!s)
		return (0);
	if (!str[0])
		return (0);
	return (1 + _strlen(str + 1));
}

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n: bytes of s2 to copy into new memory
 * Return: NULL if failed, pointer to string otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	unsigned int len_s1 = _strlen(s1);
	unsigned int len_s2 = _strlen(s2);
	unsigned int size = 0;
	int i = 0, j = 0;

	if (n > len_s2)
		n = len_s2;
	size = len_s1 + n + 1;
	str = malloc(size);
	if (!str)
		return (NULL);
	if (s1)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (n)
		{
			str[i] = s2[j];
			i++;
			j++;
			n--;
		}
	}
	str[i] = '\0';
	return (str);
}
