#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: address of first element of string array
 *
 * Return: length of string whose address is s
 */
int _strlen(char *s)
{
	char c = *s;
	int i = 0;

	while (c)
	{
		i++;
		c = *(s + i);
	}
	return (i);
}
/**
 * _strncat - a function that concatenates two strings.
 * it will use at most n bytes from src.
 * @dest: string to be appended
 * @src: string added to dest.
 * @n: number of bytes of src to append to dest
 *
 * Return: Always dest. The concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	char c = *dest;

	if (n > 0)
	{
		while (c)
		{
			i++;
			c = *(dest + i);
		}
		while (j < n)
		{
			if (*(src + j) == '\0')
			{
				return (dest);
			}
			else
			{
				*(dest + i) = *(src + j);
				i++;
				j++;
			}
		}
	}
	return (dest);
}

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: NULL if malloc failed, pointer to newly allocated
 * memory with s1 and s2 copied into it if successful
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	str = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	_strncat(str, s1, _strlen(s1));
	_strncat((str + _strlen(s1)), s2, (_strlen(s2) + 1));
	return (str);
}
