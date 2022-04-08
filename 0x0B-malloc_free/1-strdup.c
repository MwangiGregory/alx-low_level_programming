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
 * _strcpy - copies the string pointed to by src,
 * including terminating null byte(\0),
 * to the buffer pointed to by dest.
 * @src: address of first character in string array
 * @dest: buffer
 *
 * Return: pointer to buffer.
 */
char *_strcpy(char *dest, char *src)
{
	char c = *src;
	int i = 0;

	while (c)
	{
		*(dest + i) = *(src + i);
		i++;
		c = *(src + i);
	}
	if (c == '\0')
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
/**
 * _strdup - duplicates the str in a new space in memory
 * @str: pointer to a string
 *
 * Return: NULL if malloc fails and if NULL string is
 * passed. Return pointer to duplicated string on success.
 */
char *_strdup(char *str)
{
	char *ch;

	if (str == NULL)
	{
		return (NULL);
	}
	ch = malloc(_strlen(str) + 1);
	if (ch == NULL)
	{
		return (NULL);
	}
	return (_strcpy(ch, str));
}
