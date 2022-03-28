#include <stdio.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 * @s: pointer to array
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to modified memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
