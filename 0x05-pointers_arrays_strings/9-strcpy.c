#include "main.h"

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
